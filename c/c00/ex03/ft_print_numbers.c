/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:56:22 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/04 16:24:38 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}

// compila: gcc -Wall -Wextra -Werror ft_print_numbers.c -o ft_print_numbers
// Executa: ./ft_print_numbers
// Norminette: norminette -R CheckForbiddenSourceHeader ft_print_numbers.c

// int	main(void)
// 	{
// 	ft_print_numbers();
// 	write(1, "\n", 1);
// 	return (0);
// 	}
