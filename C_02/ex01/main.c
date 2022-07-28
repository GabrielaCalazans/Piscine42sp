/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:08:31 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/28 13:42:18 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>

char	*ft_strncpy (char *dest, char *src, unsigned int n);
void	ft_putchar(char c);
void	ft_loopchar(char *c);
void	ft_putstr(char *str);

int	main()
{
	char strD[] = "MER";  
	char strS[] = "GabFJKLO";
	char *befor;
	char *after;
	
	befor = "ANTES DA ft_strncpy\n";
	after = "DEPOIS DA ft_strncpy com N=5 \n";

	ft_loopchar(befor);
	ft_putstr(strD);
	ft_putchar('\n');
	ft_putstr(strS);
	ft_putchar('\n');
	
	ft_loopchar(after);
	
	ft_strncpy(strD, strS, 5);
	//strncpy(strD, strS, 5);

	ft_putstr(strD);
	ft_putchar('\n');
	ft_putstr(strS);
	ft_putchar('\n');
	return (0);

}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while(str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}
void	ft_loopchar(char *c)
{
	while (*c != '\0')
	{
		write(1, c, 1);
		c++;
	}
}
