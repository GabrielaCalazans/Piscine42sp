/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:20:55 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/20 19:57:19 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print(char c);
void	ft_putnbr(int nb);
void	ft_ultimate_ft(int *********nbr);

int	main()
{
	int	var;
	int	*nbr1;
	int	**nbr2;
	int	***nbr3;
	int	****nbr4;
	int	*****nbr5;
	int	******nbr6;
	int	*******nbr7;
	int	********nbr8;
	int	*********nbr;
	
	var = 10;
	nbr1 = &var;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr = &nbr8;
	
	printf("ANTES DO ft_ultimate_ft.\n");
	ft_putnbr(*********nbr);
	ft_print('\n');
	ft_putnbr(var);
	ft_print('\n');

	ft_ultimate_ft(nbr);

	printf("DEPOIS DO ft_ultimate_ft.\n");
	ft_putnbr(var);
	ft_print('\n');
	ft_putnbr(*********nbr);
	ft_print('\n');
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