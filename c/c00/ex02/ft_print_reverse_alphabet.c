/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:54:07 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/04 16:23:31 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}

// compila: gcc -Wall -Wextra -Werror 
// ft_print_reverse_alphabet.c -o ft_print_reverse_alphabet
// Execulta: ./ft_print_reverse_alphabet
// Norminette: norminette -R CheckForbiddenSourceHeader

// int	main(void)
// 	{
// 	ft_print_reverse_alphabet();
// 	write(1, "\n", 1);
// 	return (0);
// 	}
