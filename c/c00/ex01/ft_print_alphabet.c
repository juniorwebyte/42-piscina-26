/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:39:02 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/04 16:22:22 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

// compila: gcc -Wall -Wextra -Werror ft_print_alphabet.c -o ft_print_alphabet
// Execulta: ./ft_print_alphabet
// Norminette: norminette -R CheckForbiddenSourceHeader ft_print_alphabet.c

// int	main(void)
// {
// 	ft_print_alphabet();
// 	write(1, "\n", 1); // Pula uma linha no final para ficar limpo
// 	return (0);
// }
