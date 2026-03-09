/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:09:08 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/04 16:25:14 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

// compila: gcc -Wall -Wextra -Werror ft_is_negative.c -o ft_is_negative
// Executa: ./ft_is_negative
// Norminette: norminette -R CheckForbiddenSourceHeader ft_is_negative.c

// int main(void)
//   {
//       ft_is_negative(-5); // Deve imprimir 'N'
//       ft_is_negative(0);  // Deve imprimir 'P'
//       ft_is_negative(10); // Deve imprimir 'P'
//       write(1, "\n", 1); // Pula uma linha no final
//       return (0);
//   }
