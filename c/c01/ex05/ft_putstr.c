/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:02:41 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/06 18:09:59 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Hello, World!";
// 	ft_putstr(str);
// 	write(1, "\n", 1);
// 	return (0);
// }

// compila: gcc -Wall -Wextra -Werror ft_putstr.c -o ft_putstr
// Executa: ./ft_putstr
// Norminette: norminette -R CheckForbiddenSourceHeader ft_putstr.c

// #include <stdio.h> Para usar o printf
// #include <unistd.h> Para usar o write e putchar
