/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:18:19 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/27 13:57:01 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}
