/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:50:23 by gussilva          #+#    #+#             */
/*   Updated: 2026/03/03 15:28:14 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 20;

	int *pA;
	int *pB;

	pA = &a;
	pB = &b;

	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(pA, pB);
	printf("%d\n", a);
	printf("%d\n", b);
}