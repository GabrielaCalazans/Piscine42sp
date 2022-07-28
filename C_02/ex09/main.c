#include<unistd.h>
#include<stdio.h>

char    *ft_strcapitalize(char *str);
void	ft_putchar(char c);
void	ft_loopchar(char *c);

int main()
{
    char *Atest = "DEPOIS DA ft_strcase ";
    char *btest = "ANTES DA ft_strpcase ";
	char strtest[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char str2[] = "gabriela tá fo...";


    ft_loopchar(btest);
    ft_putchar('\n');
    ft_loopchar(strtest);
    ft_putchar('\n');
    ft_loopchar(str2);
    ft_putchar('\n');
    
    ft_loopchar(Atest);
    ft_strcapitalize(strtest);
    ft_strcapitalize(str2);
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