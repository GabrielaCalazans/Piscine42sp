/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:10:39 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/27 01:26:03 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	size--;
	count = 0;
	while (count < size)
	{
		temp = tab[count];
		tab[count] = tab[size];
		tab[size] = temp;
		size--;
		count++;
	}
}
