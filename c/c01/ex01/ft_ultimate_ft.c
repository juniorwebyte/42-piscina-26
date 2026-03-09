/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:53:30 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/06 18:10:37 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)

{
	*********nbr = 42;
}

// compila: gcc -Wall -Wextra -Werror ft_ultimate_ft.c -o ft_ultimate_ft
// Executa: ./ft_ultimate_ft
// Norminette: norminette -R CheckForbiddenSourceHeader ft_ultimate_ft.c

// #include <stdio.h> Para usar o printf
// #include <unistd.h> Para usar o write e putchar

// int	main(void)
// {
// 	int		n;
// 	int		*n1;
// 	int		**n2;
// 	int		***n3;
// 	int		****n4;
// 	int		*****n5;
// 	int		******n6;
// 	int		*******n7;
// 	int		********n8;
// 	int		*********nbr;

// 	n = 0;
// 	n1 = &n;
// 	n2 = &n1;
// 	n3 = &n2;
// 	n4 = &n3;
// 	n5 = &n4;
// 	n6 = &n5;
// 	n7 = &n6;
// 	n8 = &n7;
// 	nbr = &n8;

// 	ft_ultimate_ft(nbr);
// 	printf("%d\n", n);
// 	write(1, &n, sizeof(n));
// 	putchar('\n');
// 	return (0);

// }
