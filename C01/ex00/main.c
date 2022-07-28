#include <stdio.h>
#include <unistd.h>

void	ft_print(char c);
void	ft_putnbr(int nb);
void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	var;

	var = 10;
	nbr = &var;
	
	printf("ANTES DO ft_ft.\n");
	ft_putnbr(*nbr);
	ft_print('\n');
	ft_putnbr(var);
	ft_print('\n');
	
	printf("DEPOIS DO ft_ft\n");
	ft_ft(nbr);
	ft_putnbr(*nbr);
	ft_print('\n');
	ft_putnbr(var);
	
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
