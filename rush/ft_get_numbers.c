/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 21:02:04 by rviniciu          #+#    #+#             */
/*   Updated: 2026/03/09 11:26:29 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter_numbers;

	counter_numbers = 0;
	while (str[counter_numbers] != '\0')
		counter_numbers++;
	if (counter_numbers != 31)
		return (0);
	return (counter_numbers);
}

int	ft_get_numbers(char *str, int *tab)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i] != '\0')
	{
		if (i % 2 == 1)
		{
			if (str[i] != ' ')
				return (0);
		}
		else
		{
			if (str[i] >= '1' && str[i] <= '4')
				tab[i / 2] = (str[i] - '0');
			else
				return (0);
		}
		i++;
	}
	return (1);
}
