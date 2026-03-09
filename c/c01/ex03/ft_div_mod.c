/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:40:38 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/06 18:10:27 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	div;
// 	int	mod;

// 	x = 10;
// 	y = 3;
// 	ft_div_mod(x, y, &div, &mod);
// 	printf("Divisão: %d\n", div);
// 	printf("Resto: %d\n", mod);
// 	return (0);
// }

// compila: gcc -Wall -Wextra -Werror ft_div_mod.c -o ft_div_mod
// Executa: ./ft_div_mod
// Norminette: norminette -R CheckForbiddenSourceHeader ft_div_mod.c