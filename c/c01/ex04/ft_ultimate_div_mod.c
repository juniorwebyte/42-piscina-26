/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 17:56:44 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/06 18:10:18 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 10;
// 	y = 3;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("Divisão: %d\n", x);
// 	printf("Resto: %d\n", y);
// 	return (0);
// }

// compila: gcc -Wall -Wextra -Werror ft_ultimate_div_mod
// Executa: ./ft_ultimate_div_mod
// Norminette: norminette -R CheckForbiddenSourceHeader ft_ultimate_div_mod.c
