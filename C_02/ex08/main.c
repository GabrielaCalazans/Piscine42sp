#include<unistd.h>
#include<stdio.h>

char    *ft_strlowcase(char *str);
void	ft_putchar(char c);
void	ft_loopchar(char *c);

int main()
{
    char *Atest = "DEPOIS DA ft_strcase ";
    char *btest = "ANTES DA ft_strpcase ";
	char strtest[] = "ABCDEF";
	char str2[] = "aBcDefGhiJ";


    ft_loopchar(btest);
    ft_putchar('\n');
    ft_loopchar(strtest);
    ft_putchar('\n');
    ft_loopchar(str2);
    ft_putchar('\n');
    
    ft_loopchar(Atest);
    ft_strlowcase(strtest);
    ft_strlowcase(str2);
    ft_putchar('\n');
    ft_loopchar(strtest);
    ft_putchar('\n');
    ft_loopchar(str2);	

    return (0);
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
