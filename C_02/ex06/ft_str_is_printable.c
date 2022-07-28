/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:32:11 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/27 14:51:24 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int count;
	
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] == 127)
		{
			return (0);
		}
		count++;	
	}
	return (1);
}
