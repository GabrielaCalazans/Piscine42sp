/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:59:51 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/19 21:28:12 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n)
{
	if (n <= 0)
	{
		write(1,"Error\n", 5);
	}
	if (n > 0)
	{
		write(1, "I'm so sorry!", 13);
	}
}
