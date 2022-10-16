/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguimara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:39:53 by nguimara          #+#    #+#             */
/*   Updated: 2022/07/10 15:00:13 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	y0;
	int	x0;

	y0 = 1;
	x0 = 1;
	while (y0 <= y && y > 0 && x > 0)
	{
		while (x0 <= x)
		{
			if ((y0 == 1 && x0 == 1)
				|| (y0 == y && x0 == x && x != 1 && y != 1))
				ft_putchar('/');
			else if ((y0 == 1 && x0 == x) || (y0 == y && x0 == 1))
				ft_putchar('\\');
			else if ((y0 == 1 || y0 == y)
				|| ((y0 != 1 || y0 != y) && (x0 == 1 || x0 == x)))
				ft_putchar('*');
			else
				ft_putchar(' ');
			x0++;
		}
		x0 = 1;
		ft_putchar('\n');
		y0++;
	}
}
