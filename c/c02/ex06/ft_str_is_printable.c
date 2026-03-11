/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 21:13:04 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/11 17:31:12 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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

	str1 = "Hello, World!";
	str2 = "Hello\nWorld!";
	str3 = "";
	printf("String: '%s' - Is printable? %d\n", str1, ft_str_is_printable(str1));
	printf("String: '%s' - Is printable? %d\n", str2, ft_str_is_printable(str2));
	printf("String: '%s' - Is printable? %d\n", str3, ft_str_is_printable(str3));
	return (0);
} */
