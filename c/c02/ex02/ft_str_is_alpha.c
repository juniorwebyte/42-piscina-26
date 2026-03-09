/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:31:40 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/07 19:46:50 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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

	str1 = "HelloWorld";
	str2 = "Hello123";
	str3 = "";
	printf("String: '%s' - Is alpha? %d\n", str1, ft_str_is_alpha(str1));
	printf("String: '%s' - Is alpha? %d\n", str2, ft_str_is_alpha(str2));
	printf("String: '%s' - Is alpha? %d\n", str3, ft_str_is_alpha(str3));
	return (0);
} */
