/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waldos-s <waldos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 19:05:24 by waldos-s          #+#    #+#             */
/*   Updated: 2026/03/03 20:35:15 by waldos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = (size -1);
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		printf("Troquei tab[%d] por tab[%d]\n", i, j);
		i++;
		j--;
	}
}

// int	main(void)
// {
// 	int	array[] = {1,2,3,4,5};
// 	int	length = 5;
// 	int	k = 0;

// 	ft_rev_int_tab(array, length);
// 	printf("Resultado final: ");
// 	while (k < length)
// 	{
// 		printf("%d ", array[k]);
// 		k++;
// 	}
// 	printf("\n");
// 	return (0);
// }
