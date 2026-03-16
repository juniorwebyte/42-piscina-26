/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:00:57 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/16 19:47:31 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "Hello, World!";
	char	str3[] = "Hello, 42!";
	char	str4[] = "Hello, World!";

	write(1, "Comparing str1 and str2: ", 25);
	write(1, (ft_strcmp(str1, str2) == 0) ? "Equal\n" : "Not Equal\n", 10);

	write(1, "Comparing str1 and str3: ", 25);
	write(1, (ft_strcmp(str1, str3) == 0) ? "Equal\n" : "Not Equal\n", 10);

	write(1, "Comparing str1 and str4: ", 25);
	write(1, (ft_strcmp(str1, str4) == 0) ? "Equal\n" : "Not Equal\n", 10);

	return (0);
} */
