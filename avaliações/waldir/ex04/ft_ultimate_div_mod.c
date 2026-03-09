/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 04:36:17 by waldos-s          #+#    #+#             */
/*   Updated: 2026/03/04 20:28:15 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temporario;

	temporario = *a;
	*a = (*a / *b);
	*b = (temporario % *b);
}

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 45;
	num2 = 5;
	ft_ultimate_div_mod(&num1, &num2);
	printf("Valores: %d %d \n", num1, num2);
	return (0);
}
