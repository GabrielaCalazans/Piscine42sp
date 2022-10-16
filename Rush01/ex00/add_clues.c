/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_clues.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 05:36:35 by guolivei          #+#    #+#             */
/*   Updated: 2022/07/17 18:50:55 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_clues(char *matrix, char *input);
void	add_rows(char *matrix, char *input, int row, int *string_position);
void	add_columns(char *matrix, char *input, int col, int *string_position);

void	add_clues(char *matrix, char *input)
{
	int	row;
	int	col;
	int	string_position;

	row = 0;
	string_position = 0;
	add_rows(matrix, input, row, &string_position);
	col = 0;
	add_columns(matrix, input, col, &string_position);
}

void	add_rows(char *matrix, char *input, int row, int *string_position)
{
	int	col;

	while (row < 6)
	{
		col = 0;
		while (col < 6)
		{
			if ((row == 0 || row == 5) && col >= 1 && col <= 4)
			{
				*(matrix + 6 * row + col) = input[*string_position];
				(*string_position)++;
			}
			col++;
		}
		row++;
	}
}

void	add_columns(char *matrix, char *input, int col, int *string_position)
{
	int	row;

	while (col < 6)
	{
		row = 0;
		while (row < 6)
		{
			if ((col == 0 || col == 5) && row >= 1 && row <= 4)
			{
				*(matrix + 6 * row + col) = input[*string_position];
				(*string_position)++;
			}
			row++;
		}
		col++;
	}
}
