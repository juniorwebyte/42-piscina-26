/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 21:02:54 by rviniciu          #+#    #+#             */
/*   Updated: 2026/03/09 11:26:55 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	top(int board[4][4], int x);
int	bottom(int board[4][4], int x);
int	left(int board[4][4], int y);
int	right(int board[4][4], int y);

int	ft_verify_vertical(int board[4][4], int tab[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (top(board, i) != tab[i])
			return (0);
		i++;
	}
	while (i < 8)
	{
		if (bottom(board, i - 4) != tab[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_verify_horizontal(int board[4][4], int tab[16])
{
	int	i;

	i = 8;
	while (i < 12)
	{
		if (left(board, i - 8) != tab[i])
			return (0);
		i++;
	}
	while (i < 16)
	{
		if (right(board, i - 12) != tab[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_verify(int board[4][4], int tab[16])
{
	return (ft_verify_vertical(board, tab) && ft_verify_horizontal(board, tab));
}
