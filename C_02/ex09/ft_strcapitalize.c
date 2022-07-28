/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:24:25 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/27 14:18:36 by gacalaza         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	beginning;

	count = 0;
	beginning = 1;
	ft_strlowcase(str);
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (beginning == 1)
			{
				str[count] = str[count] - 32;
				beginning = 0;
			}
		}
		else if (str[count] >= '0' && str[count] <= '9')
			beginning = 0;
		else
			beginning = 1;
		count++;
	}
	return (str);
}
