/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 11:40:31 by jpaulo-p          #+#    #+#             */
/*   Updated: 2026/03/07 17:55:08 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b != 0)
	{
		temp = *a;
		*a = temp / *b;
		*b = temp % *b;
	}
}

int	main(void)
{
	int	x;
	int	y;

	x = 15;
	y = 5;
	ft_ultimate_div_mod(&x, &y);
	printf("div: %d, mod: %d\n", x, y);
	putchar('\n');
	return (0);
}
