/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:04:43 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/27 13:30:52 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 'a' && str[count] <= 'z'))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
