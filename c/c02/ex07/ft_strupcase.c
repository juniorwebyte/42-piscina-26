/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 21:15:32 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/07 21:15:48 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "helloworld";
	str2 = "HelloWorld";
	str3 = "";
	printf("String: '%s' - Uppercase: '%s'\n", str1, ft_strupcase(str1));
	printf("String: '%s' - Uppercase: '%s'\n", str2, ft_strupcase(str2));
	printf("String: '%s' - Uppercase: '%s'\n", str3, ft_strupcase(str3));
	return (0);
}
