/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 19:49:24 by isantos-          #+#    #+#             */
/*   Updated: 2026/03/09 11:26:59 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_get_numbers(char *str, int *result);
int		ft_generate_board(int board[4][4], int x, int y, int input[16]);
void	ft_putstr(char *str);

void	ft_initialize_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	board[4][4];
	int	tab[16];

	if (argc != 2 || ft_get_numbers(argv[1], tab) == 0)
	{
		ft_putstr("Error, invalid argument (\"4 3 2 1 1 2 3 4...\").");
		return (1);
	}
	ft_initialize_board(board);
	if (ft_generate_board(board, 0, 0, tab) == 0)
	{
		ft_putstr("Error, no solution found!");
		return (1);
	}
	return (0);
}
