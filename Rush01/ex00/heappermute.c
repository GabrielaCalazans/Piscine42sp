/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heappermute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 05:26:12 by guolivei          #+#    #+#             */
/*   Updated: 2022/07/17 13:06:32 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LENGTH 4

void	swap(char *x, char*y);

void	heappermute(char *v, int n, char *permutations, int *perm_count)
{
	int	i;

	if (n == 1)
	{
		i = 0;
		while (i < LENGTH)
		{
			*(permutations + *(perm_count) * LENGTH + i) = v[i];
			i++;
		}
		*perm_count = *perm_count + 1;
	}
	else
	{
		i = 0;
		while (i < n)
		{
			heappermute(v, n - 1, permutations, perm_count);
			if (n % 2 == 1)
				swap(&v[0], &v[n - 1]);
			else
				swap(&v[i], &v[n - 1]);
			i++;
		}
	}
}

void	swap(char *x, char *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
