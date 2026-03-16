/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:45:59 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/16 19:47:18 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/* int main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "Hello, World!";
	char	str3[] = "Hello, 42!";
	char	str4[] = "Hello, World!";

	write(1, "Comparing str1 and str2: ", 25);
	write(1, (ft_strncmp(str1, str2, 13) == 0) ? "Equal\n" : "Not Equal\n", 10);

	write(1, "Comparing str1 and str3: ", 25);
	write(1, (ft_strncmp(str1, str3, 13) == 0) ? "Equal\n" : "Not Equal\n", 10);

	write(1, "Comparing str1 and str4: ", 25);
	write(1, (ft_strncmp(str1, str4, 13) == 0) ? "Equal\n" : "Not Equal\n", 10);

	return (0);
} */
