/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 20:40:04 by jpaulo-p          #+#    #+#             */
/*   Updated: 2026/03/07 17:52:44 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	x;
	int	y;
	int	d;
	int	r;

	x = 15;
	y = 5;
	d = 0;
	r = 0;

	ft_div_mod(x, y, &d, &r);
	printf("div: %d, mod: %d\n", d, r);
	putchar('\n');
	return (0);
}
