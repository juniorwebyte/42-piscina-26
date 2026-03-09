/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:17:40 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/04 16:20:01 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// compila: gcc -Wall -Wextra -Werror ft_putchar.c -o ft_putchar
// Execulta: ./ft_putchar
// Norminette: norminette -R CheckForbiddenSourceHeader ft_putchar.c

// int	main(void)
// {
// 	ft_putchar('H');
// 	ft_putchar('\n');
// 	return (0);
// }
