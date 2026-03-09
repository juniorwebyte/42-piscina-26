/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 03:53:57 by waldos-s          #+#    #+#             */
/*   Updated: 2026/03/04 20:23:14 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	numtemp;

	numtemp = *a;
	*a = *b;
	*b = numtemp;
}

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 2;
	num2 = 7;
	ft_swap(&num1, &num2);
	printf("valores trocados: %i %i \n", num1, num2);
	return (0);
}
