/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_permutations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:22:03 by guolivei          #+#    #+#             */
/*   Updated: 2022/07/17 20:37:24 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	heappermute(char *v, int n, char *permutations, int *perm_count);
void	print_matrix(char *m, int row, int col);
void	add_clues(char *matriz, char *input);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_str_is_numeric(char *str);
char	*cut(char *src, char *dest);
int		test_clues(char *matrix);
int		input_error(char **argv, char *clues);
int		has_input_error_1(char **argv);
int		has_input_error_2(char *str);
void	search_matrix(char *permutations, char *matrix, char *clues);
void	initialize_num(char num[4]);
void	free_mem(char *permutations, char *matrix);

#define LENGTH 4
#define TRUE 1
#define FALSE 0

int	main(int argc, char *argv[])
{
	char	clues[17];
	char	*permutations;
	char	*matrix;
	char	num[4];
	int		perm_count;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	cut(argv[1], &clues[0]);
	if (input_error(argv, clues))
	{
		ft_putstr("Error\n");
		return (1);
	}
	permutations = malloc(24 * 4);
	matrix = malloc((LENGTH + 2) * (LENGTH + 2));
	initialize_num(num);
	perm_count = 0;
	heappermute(num, LENGTH, permutations, &perm_count);
	search_matrix(permutations, matrix, clues);
	free_mem(permutations, matrix);
	return (0);
}

int	input_error(char **argv, char *clues)
{
	if (has_input_error_1(argv))
		return (TRUE);
	if (has_input_error_2(clues))
		return (TRUE);
	return (FALSE);
}

void	initialize_num(char num[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		num[i] = (i + 1 + '0');
		i++;
	}
}

void	free_mem(char *permutations, char *matrix)
{
	free(permutations);
	free(matrix);
}
