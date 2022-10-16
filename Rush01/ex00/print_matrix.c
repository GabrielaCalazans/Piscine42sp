/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 08:39:11 by guolivei          #+#    #+#             */
/*   Updated: 2022/07/17 18:41:57 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_matrix(char *m, int row, int col);

#define LENGTH 4

void	print_matrix(char *m, int row, int col)
{
	int	i;
	int	j;

	i = 1;
	while (i < row - 1)
	{
		j = 1;
		while (j < col - 1)
		{
			write(1, (m + i * col + j), 1);
			if (j != LENGTH)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
