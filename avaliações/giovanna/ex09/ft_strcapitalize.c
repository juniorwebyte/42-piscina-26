/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:53:06 by audgiova          #+#    #+#             */
/*   Updated: 2026/03/07 15:25:33 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);
int		ft_isalpha(char c);
int		ft_isnum(char c);
char	ft_strupcase(char c);

/* int	main(void)
{
	char	str[] = "HELLO";

	//str = "hi, how are you? 42words forty-two; fifty+and+one";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
} */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	previous_char;

	i = 0;
	str = ft_strlowcase(str);
	previous_char = '\0';
	while (str[i] != '\0')
	{
		if (ft_isalpha(previous_char) == 0 && ft_isalpha(str[i]))
		{
			str[i] = ft_strupcase(str[i]);
		}
		previous_char = str[i];
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') \
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_isnum(char c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
