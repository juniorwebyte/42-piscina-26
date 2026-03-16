/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:09:40 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/16 19:46:39 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	str[] = "Hello, World!";
	char	to_find1[] = "World";
	char	to_find2[] = "42";
	char	to_find3[] = "";

	write(1, "Searching for 'World' in str: ", 30);
	write(1, (ft_strstr(str, to_find1) != NULL) ? "Found\n" : "Not Found\n", 10);

	write(1, "Searching for '42' in str: ", 28);
	write(1, (ft_strstr(str, to_find2) != NULL) ? "Found\n" : "Not Found\n", 10);

	write(1, "Searching for an empty string in str: ", 38);
	write(1, (ft_strstr(str, to_find3) != NULL) ? "Found\n" : "Not Found\n", 10);

	return (0);
}
 */