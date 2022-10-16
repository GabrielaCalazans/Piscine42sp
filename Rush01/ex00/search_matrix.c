/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:49:09 by guolivei          #+#    #+#             */
/*   Updated: 2022/07/17 20:50:04 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "search_matrix.h"

void	ft_putstr(char *str);
int		test_clues(char *matrix);
void	generate_matrix(char *permutations, t_perms p, char *m, char *clues);
void	print_matrix(char *m, int row, int col);
void	add_clues(char *matriz, char *input);
int		solved(char *permutations, t_perms p, char *matrix, char *clues);

#define LENGTH 4
#define TRUE 1
#define FALSE 0

void	search_matrix(char *permutations, char *matrix, char *clues)
{
	t_perms	p;

	p.l1 = 0;
	while (p.l1 < 24)
	{
		p.l2 = 0;
		while (p.l2 < 24)
		{
			p.l3 = 0;
			while (p.l3 < 24)
			{
				p.l4 = 0;
				while (p.l4 < 24)
				{
					if (solved(permutations, p, matrix, clues))
						return ;
					p.l4++;
				}
				p.l3++;
			}
			p.l2++;
		}
		p.l1++;
	}
	ft_putstr("Error\n");
}

void	generate_matrix(char *permutations, t_perms p, char *m, char *clues)
{
	int	i;
	int	j;

	i = 1;
	while (i < LENGTH + 1)
	{
		j = 1;
		while (j < LENGTH + 1)
		{
			if (i == 1)
				*(m + i * 6 + j) = *(permutations + p.l1 * 4 + j - 1);
			else if (i == 2)
				*(m + i * 6 + j) = *(permutations + p.l2 * 4 + j - 1);
			else if (i == 3)
				*(m + i * 6 + j) = *(permutations + p.l3 * 4 + j - 1);
			else if (i == 4)
				*(m + i * 6 + j) = *(permutations + p.l4 * 4 + j - 1);
			j++;
		}
		i++;
	}
	add_clues(m, clues);
}

int	solved(char *permutations, t_perms p, char *matrix, char *clues)
{
	generate_matrix (permutations, p, matrix, clues);
	if (test_clues(matrix))
	{
		print_matrix(matrix, LENGTH + 2, LENGTH + 2);
		return (TRUE);
	}
	return (FALSE);
}
