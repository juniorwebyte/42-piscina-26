/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:36:43 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/11 19:26:29 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		printf("%02x ", ptr[i]);
		if ((i + 1) % 16 == 0)
			printf("\n");
		i++;
	}
	return (addr);
}

/* int	main(void)
{
	char	str[] = "Hello, World!";
	ft_print_memory(str, sizeof(str));
	return (0);
} */
