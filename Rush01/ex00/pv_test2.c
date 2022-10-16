/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pv_test2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:03:53 by guolivei          #+#    #+#             */
/*   Updated: 2022/07/17 22:03:56 by guolivei         ###   ########.fr       */
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

int	test_clues(char *matrix)
{
	int		rep[4];

	zero_repeat(rep);
	if (!up_down_ok(rep, matrix, 1, '0'))
		return (FALSE);
	if (!down_up_ok(matrix, 1, 1, '0'))
		return (FALSE);
	if (!left_right_ok(matrix, 1, 1, '0'))
		return (FALSE);
	if (!right_left_ok(matrix, 1, 1, '0'))
		return (FALSE);
	return (TRUE);
}

int	repeat(int *rep)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (rep[i] != 1)
			return (TRUE);
		i++;
	}
	return (FALSE);
}

void	zero_repeat(int *rep)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		rep[i] = 0;
		i++;
	}
}
