/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:25:17 by guolivei          #+#    #+#             */
/*   Updated: 2022/07/17 18:48:33 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		has_input_error_1(char **argv);
int		has_input_error_2(char *clues);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_str_is_numeric(char *str);

#define TRUE 1
#define FALSE 0

int	has_input_error_1(char **argv)
{
	int	i;

	if (ft_strlen(argv[1]) != 31)
		return (TRUE);
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 1 && argv[1][i] != ' ')
			return (TRUE);
		i++;
	}
	return (FALSE);
}

int	has_input_error_2(char *clues)
{
	int	i;

	if (!ft_str_is_numeric(clues))
	{
		return (TRUE);
	}
	i = 0;
	while (clues[i] != '\0')
	{
		if (clues[i] < '1' || clues[i] > '4')
		{
			return (TRUE);
		}
		i++;
	}
	return (FALSE);
}
