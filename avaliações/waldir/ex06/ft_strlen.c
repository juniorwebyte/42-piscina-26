/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waldos-s <waldos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:09:45 by waldos-s          #+#    #+#             */
/*   Updated: 2026/03/03 18:50:10 by waldos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int	quant;
// 	char caracteres[] = "Tim Tim";

// 	quant = ft_strlen(caracteres);
// 	printf("Quantidade de caracteres %d", quant);
// 	printf("\n");
// 	return (0);
// }
