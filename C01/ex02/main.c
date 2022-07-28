#include<stdio.h>
#include<unistd.h>

void	ft_swap(int *a, int *b);
void	ft_putnbr(int nb);
void	ft_putchar(char c);


int main()
{
	int var1;
	int var2;
	int *a;
	int *b;

	var1 = 10;
	var2 = 5;
	a = &var1;
	b = &var2;

	printf("ANTES DO SWAP\n");
	ft_putnbr(var1);
	ft_putchar('\n');
	ft_putnbr(var2);
	ft_putchar('\n');

	ft_swap(a, b);
	
	printf("DEPOIS DO SWAP\n");
	ft_putnbr(var1);
	ft_putchar('\n');
	ft_putnbr(var2);
}


void	ft_putnbr(int nb)
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
		ft_putnbr(nb / 10);
	}
	ft_putnbr(nb % 10);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
