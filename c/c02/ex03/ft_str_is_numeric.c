/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:47:43 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/07 21:17:25 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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

	str1 = "1234567890";
	str2 = "Hello123";
	str3 = "";
	printf("String: '%s' - Is numeric? %d\n", str1, ft_str_is_numeric(str1));
	printf("String: '%s' - Is numeric? %d\n", str2, ft_str_is_numeric(str2));
	printf("String: '%s' - Is numeric? %d\n", str3, ft_str_is_numeric(str3));
	return (0);
} */
