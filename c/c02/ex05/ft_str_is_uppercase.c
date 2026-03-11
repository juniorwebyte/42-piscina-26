/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 21:10:50 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/11 17:24:28 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "HELLO, WORLD!";
	str2 = "Hello, World!";
	str3 = "";
	printf("String: '%s' - Is uppercase? %d\n", str1, ft_str_is_uppercase(str1));
	printf("String: '%s' - Is uppercase? %d\n", str2, ft_str_is_uppercase(str2));
	printf("String: '%s' - Is uppercase? %d\n", str3, ft_str_is_uppercase(str3));
	return (0);
} */
