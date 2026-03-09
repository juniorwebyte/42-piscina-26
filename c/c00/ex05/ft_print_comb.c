/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:37:32 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/04 16:31:28 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7' || b != '8' || c != '9')
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

// compila: gcc -Wall -Wextra -Werror ft_print_comb.c -o ft_print_comb
// Executa: ./ft_print_comb
// Norminette: norminette -R CheckForbiddenSourceHeader ft_print_comb.c

// int	main(void)
// {
// 	ft_print_comb();
// 	write(1, "\n", 1); // Pula uma linha no final para ficar limpo
// 	return (0);
// }
