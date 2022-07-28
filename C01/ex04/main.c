#include<unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);
void	ft_print(char c);
void	ft_putnbr(int nb);

int main()
{
	int	vara;
	int	varb;
	int	*a;
	int	*b;
		
	vara = 10;
	varb = 5;
	a = &vara;
	b = &varb;
	printf("ANTES DA ft_ultimate_div_mod\n");
	ft_putnbr(vara);
	ft_print('\n');
	ft_putnbr(varb);
	ft_print('\n');
	printf("DEPOIS DA ft_ultimate_div_mod\n");
	ft_ultimate_div_mod(a, b);
	ft_putnbr(vara);
	ft_print('\n');
	ft_putnbr(varb);

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
