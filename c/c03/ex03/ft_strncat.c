/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:06:20 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/16 19:46:54 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	dest[50] = "Hello, ";
	char	src[] = "World!";

	write(1, "Before concatenation: ", 22);
	write(1, dest, 50);
	write(1, "\n", 1);

	ft_strncat(dest, src, 3);

	write(1, "After concatenation: ", 21);
	write(1, dest, 50);
	write(1, "\n", 1);

	return (0);
} */
