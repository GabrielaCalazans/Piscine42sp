/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pv_test1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:54:03 by guolivei          #+#    #+#             */
/*   Updated: 2022/07/17 21:43:04 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int		repeat(int *rep);
void	zero_repeat(int *rep);
int		up_down_ok(int rep[4], char *matrix, int col, char max);
int		down_up_ok(char *matrix, int col, int row, char max);
int		left_right_ok(char *matrix, int col, int row, char max);
int		right_left_ok(char *matrix, int col, int row, char max);

#define TRUE 1
#define FALSE 0
#define LENGTH 4

int	up_down_ok(int rep[4], char *matrix, int col, char max)
{
	int		row;
	char	view_clue[2];

	while (col < LENGTH + 1)
	{
		row = 1;
		view_clue[1] = *(matrix + 6 * (row - 1) + col);
		view_clue[0] = '0';
		max = '0';
		while (row < LENGTH + 1)
		{
			rep[(int)(*(matrix + 6 * (row) + col) - 48 - 1)]++;
			if (*(matrix + 6 * (row) + col) > max)
			{
				max = *(matrix + 6 * (row) + col);
				view_clue[0]++;
			}
			row++;
		}
		if (view_clue[0] != view_clue[1] || repeat(rep))
			return (FALSE);
		zero_repeat(rep);
		col++;
	}
	return (TRUE);
}

int	down_up_ok(char *matrix, int col, int row, char max)
{
	char	clue;
	char	viewed_blocks;

	while (col < LENGTH + 1)
	{
		row = LENGTH;
		clue = *(matrix + 6 * (row + 1) + col);
		viewed_blocks = '0';
		max = '0';
		while (row > 0)
		{
			if (*(matrix + 6 * (row) + col) > max)
			{
				max = *(matrix + 6 * (row) + col);
				viewed_blocks++;
			}
			row--;
		}
		if (viewed_blocks != clue)
			return (FALSE);
		col++;
	}
	return (TRUE);
}

// linhas da esquerddda para direita
int	left_right_ok(char *matrix, int col, int row, char max)
{
	char	clue;
	char	viewed_blocks;

	while (row < LENGTH + 1)
	{
		col = 1;
		clue = *(matrix + 6 * (row) + col - 1);
		viewed_blocks = '0';
		max = '0';
		while (col < LENGTH + 1)
		{
			if (*(matrix + 6 * (row) + col) > max)
			{
				max = *(matrix + 6 * (row) + col);
				viewed_blocks++;
			}
			col++;
		}
		if (viewed_blocks != clue)
		{
			return (FALSE);
		}
		row++;
	}
	return (TRUE);
}

int	right_left_ok(char *matrix, int col, int row, char max)
{
	char	clue;
	char	viewed_blocks;

	while (row < LENGTH + 1)
	{
		col = LENGTH;
		clue = *(matrix + 6 * (row) + col + 1);
		viewed_blocks = '0';
		max = '0';
		while (col > 0)
		{
			if (*(matrix + 6 * (row) + col) > max)
			{
				max = *(matrix + 6 * (row) + col);
				viewed_blocks++;
			}
			col--;
		}
		if (viewed_blocks != clue)
		{
			return (FALSE);
		}
		row++;
	}
	return (TRUE);
}
