/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:11:25 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/25 18:43:04 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	putnbr(int nb);
void	ft_putchar(char c);
void	ft_rev_int_tab(int *tab, int size);
void	ft_loopchar(char *c);

int	main()
{	
	int tab[] = {7, 15, -8, 16, 4, -3, 45, 12};
	int countA;
	int countB;
	char *tabAntes;
	char *tabDepois;
	countA = 0;
	countB = 0;
	
	tabAntes = "TABELA ANTES DA FUNÇÃO ft_rev_int_tab\n";
	tabDepois = "TABELA DEPOIS DA FUNÇÃO ft_rev_int_tab\n";

	ft_loopchar(tabAntes);
	printf("endereço 1: %p\n", tab);
	
	while (countA < 8)
	{
		putnbr(tab[countA]);
		countA++;
	}
	ft_putchar('\n');

	ft_rev_int_tab(tab, 8);

	ft_loopchar(tabDepois);
	
	printf("endereço 2: %p\n", tab);

	while (countB < 8)
	{
		putnbr(tab[countB]);
		countB++;
	}
	ft_putchar('\n');


	return (0);
}


void	putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
	{
		putnbr(nb / 10);
	}
	putnbr(nb % 10);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_loopchar(char *c)
{
	while (*c != '\0')
	{
		write(1, c, 1);
		c++;
	}
}