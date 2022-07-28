/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:06:41 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/27 11:14:58 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 'a' && str[count] <= 'z')
			&& !(str[count] >= 'A' && str[count] <= 'Z'))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
