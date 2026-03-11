/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:25:18 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/11 19:26:07 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/* int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];
	unsigned int	size;

	size = ft_strlcpy(dest, src, sizeof(dest));
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	printf("Size: %u\n", size);
	return (0);
} */
