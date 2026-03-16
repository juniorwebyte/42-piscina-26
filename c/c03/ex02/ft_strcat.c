/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:54:15 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/16 19:47:05 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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

	ft_strcat(dest, src);

	write(1, "After concatenation: ", 21);
	write(1, dest, 50);
	write(1, "\n", 1);

	return (0);
} */
