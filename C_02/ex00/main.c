/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 03:44:25 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/28 13:50:31 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>

char	*ft_strcpy(char *dest, char *src);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_loopchar(char *c);

int	main()
{
	char str1[] = "AbcjLHDSGt";
	char str2[] = "testABSCFGRes";
	char *befor;
	char *after;

	befor = "ANTES DA ft_strcpy\n";
	after = "DEPOIS DA ft_strcpy\n";

	ft_loopchar(befor);
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	
	ft_strcpy(str1, str2);
	//strcpy(str1, str2);
	ft_loopchar(after);
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
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
