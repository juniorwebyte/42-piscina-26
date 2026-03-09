/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 20:22:13 by jpaulo-p          #+#    #+#             */
/*   Updated: 2026/03/07 18:01:07 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	var_temp;
	int	*ptr_end;
	int	*ptr_start;

	ptr_start = tab;
	ptr_end = tab + size - 1;
	while (ptr_start <= ptr_end)
	{
		var_temp = *ptr_start;
		*ptr_start = *ptr_end;
		*ptr_end = var_temp;
		ptr_start++;
		ptr_end--;
	}
}

int	main(void)
{
	int	num[] = {0, 5, 20, 30, 50};
	int	i = 0;

	int	*num_ptr = num;
	int	size = sizeof(num) / sizeof(int);
	ft_rev_int_tab(num_ptr, size);
	while (i < size)
	{
		printf("%d ", num[i]);
		i++;
	}
	return (0);
}
