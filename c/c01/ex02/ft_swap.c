/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:05:11 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/06 18:10:32 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)

{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 10;
// 	y = 20;
// 	ft_swap(&x, &y);
// 	return (0);
// }

/* compila: gcc -Wall -Wextra -Werror ft_swap.c -o ft_swap
Executa: ./ft_swap
Norminette: norminette -R CheckForbiddenSourceHeader ft_swap.c */

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 10;
// 	y = 20;
// 	printf("Before swap: x = %d, y = %d\n", x, y);
// 	ft_swap(&x, &y);
// 	printf("After swap: x = %d, y = %d\n", x, y);
// 	return (0);
// }