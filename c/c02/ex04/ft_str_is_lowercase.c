/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 21:08:08 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/07 21:20:48 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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

	str1 = "helloworld";
	str2 = "HelloWorld";
	str3 = "";
	printf("String: '%s' - Is lowercase? %d\n", str1, ft_str_is_lowercase(str1));
	printf("String: '%s' - Is lowercase? %d\n", str2, ft_str_is_lowercase(str2));
	printf("String: '%s' - Is lowercase? %d\n", str3, ft_str_is_lowercase(str3));
	return (0);
} */
