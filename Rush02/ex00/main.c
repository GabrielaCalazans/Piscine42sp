/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:15:57 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/24 19:07:26 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "func.h"

void	ft_loopchar(char *c);

int	main(int argc, char *argv[])
{
	int		count;
	char	*str;
	char	*ptrc;

	if (argc == 1)
	{
		str = "one";
		ft_loopchar(str);
		return (0);
	}
	else
	{
		count = 0;
		while (*argv[count] != '\0')
		{
			if (*argv[count] == '0')
			{
				ptrc = "zero";
				ft_loopchar(ptrc);
			}
			if (*argv[count] == '1')
			{
				ptrc = "one";
				ft_loopchar(ptrc);
			}
			if (*argv[count] == '2')
			{
				ptrc = "two";
				ft_loopchar(ptrc);
			}
			if (*argv[count] == '3')
			{
				ptrc = "three";
				ft_loopchar(ptrc);
			}
			if (*argv[count] == '4')
			{
				ptrc = "four";
				ft_loopchar(ptrc);
			}
			if (*argv[count] == '5')
			{
				ptrc = "five";
				ft_loopchar(ptrc);
			}
			if (*argv[count] == '6')
			{
				ptrc = "six";
				ft_loopchar(ptrc);
			}
			if (*argv[count] == '7')
			{
				ptrc = "seven";
				ft_loopchar(ptrc);
			}
			if (*argv[count] == '8')
			{
				ptrc = "eight";
				ft_loopchar(ptrc);
			}
			if (*argv[count] == '9')
			{
				ptrc = "nine";
				ft_loopchar(ptrc);
			}
			count++;
		}
		return (0);
	}
}
