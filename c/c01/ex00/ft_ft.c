/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 10:59:52 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/06 18:11:16 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_ft(int *nbr)

{
	*nbr = 42;
}

// compila: gcc -Wall -Wextra -Werror ft_is_negative.c -o ft_is_negative
// Executa: ./ft_is_negative
// Norminette: norminette -R CheckForbiddenSourceHeader ft_is_negative.c

// #include <stdio.h> Para usar o printf
// #include <unistd.h> Para usar o write e putchar

// int	main(void)
// {
// 	int	n;

// 	ft_ft(&n);
// 	printf("%d\n", n);
// 	write(1, &n, sizeof(n));
// 	putchar('\n');
// 	return (0);
// }
