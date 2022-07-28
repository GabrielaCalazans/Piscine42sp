/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:39:21 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/26 14:21:42 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int	ft_strlen(char *str);
void	ft_print(char c);
void	ft_putnbr(int nb);
int	main()
{
	char *str = "Gabriela, hoje é rush!";
	ft_strlen(str);
	ft_putnbr(ft_strlen(str));

	return (0);
}

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_print('-');
		ft_print('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_print('-');
		nb = nb * -1;
		ft_print(nb + 48);
	}
	if (nb < 10)
	{
		ft_print(nb + 48);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
	}
	ft_putnbr(nb % 10);
}