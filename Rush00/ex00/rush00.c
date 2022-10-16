/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguimara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:42:02 by nguimara          #+#    #+#             */
/*   Updated: 2022/07/10 19:47:25 by gacalaza         ###   ########.fr       */
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
	if (x <= 0 || y <= 0)
		return ;
	while (y0 <= y)
	{
		while (x0 <= x)
		{
			if ((y0 == 1 || y0 == y) && (x0 == x || x0 == 1))
				ft_putchar('o');
			else if (y0 == 1 || y0 == y)
				ft_putchar('-');
			else if (x0 == 1 || x0 == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			x0++;
		}
		x0 = 1;
		ft_putchar('\n');
		y0++;
	}
}
