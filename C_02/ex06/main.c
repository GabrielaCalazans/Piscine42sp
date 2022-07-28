#include<unistd.h>

int	ft_str_is_printable(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_loopchar(char *c);

int main()
{
    char *Atest = "NÃO PRINTAVEIS ";
	char *strtest = "\a";
	char *btest = "Teste com minúsculas ";
	char *str2 = "abracadabra";
	char *ctest = "Teste com MAIÚSCULAS ";
    char *str3 = "EITACARA";
	char *dtest = "Teste com minúsculas e MAIÚSCULAS ";
	char *str4 = "GataLOUraLOUCURA";
	char *etest = "Teste minúsculas e espaço ";
 	char *str5 = "CARA QUE LOUCO  ";
	char *ftest = "Teste com espaço ";
	char *str6 = "  ";
	char *gtest = "Teste vazio ";
	char *str7 = "";

    ft_loopchar(Atest);
	ft_putnbr(ft_str_is_printable(strtest));
    ft_putchar('\n');
	ft_loopchar(btest);
    ft_putnbr(ft_str_is_printable(str2));
    ft_putchar('\n');
	ft_loopchar(ctest);
    ft_putnbr(ft_str_is_printable(str3));
	ft_putchar('\n');
	ft_loopchar(dtest);
	ft_putnbr(ft_str_is_printable(str4));
	ft_putchar('\n');
	ft_loopchar(etest);
	ft_putnbr(ft_str_is_printable(str5));
	ft_putchar('\n');
	ft_loopchar(ftest);
	ft_putnbr(ft_str_is_printable(str6));
	ft_putchar('\n');
	ft_loopchar(gtest);
	ft_putnbr(ft_str_is_printable(str7));

    return (0);

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
void	ft_loopchar(char *c)
{
	while (*c != '\0')
	{
		write(1, c, 1);
		c++;
	}
}
