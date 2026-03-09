/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 04:36:17 by waldos-s          #+#    #+#             */
/*   Updated: 2026/03/04 20:25:40 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

int	main(void)
{
	int	num1;
	int	num2;
	int	quociente;
	int	resto;

	num1 = 13;
	num2 = 5;
	ft_div_mod(num1, num2, &quociente, &resto);
	printf("Valores: %i %i %i %i \n", num1, num2, quociente, resto);
	return (0);
}
