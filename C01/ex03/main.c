#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	main()
{
	int a;
	int b;
	int vardiv;
	int varmod;
	int *div;
	int *mod;

	a = 100;
	b = 50;
	vardiv = a / b;
	varmod = a % b;
	div = &vardiv;
	mod = &varmod;

	printf("ANTES DA ft_div_mod: 100 e 5\n");
	printf("div: \n");
	ft_putnbr(vardiv);
	ft_putchar('\n');
	printf("mod: \n");
	ft_putnbr(varmod);
	ft_putchar('\n');

	printf("DEPOIS DA ft_div_mod 31 e 5\n");
	ft_div_mod(31, 5, div, mod);
	
	printf("div: \n");
	ft_putnbr(vardiv);
	ft_putchar('\n');
	printf("mod: \n");
	ft_putnbr(varmod);
	ft_putchar('\n');

	printf("DEPOIS DA ft_div_mod 8 e 2\n");
	ft_div_mod(8, 2, div, mod);
	
	printf("div: \n");
	ft_putnbr(vardiv);
	ft_putchar('\n');
	printf("mod: \n");
	ft_putnbr(varmod);
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	if	(nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if	(nb < 0)
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
		ft_putnbr( nb / 10);
	}
	ft_putnbr(nb % 10);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
