/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:18:58 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/27 13:59:25 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (((str[count] >= 'A') && (str[count] <= 'Z')))
		{
			str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}
