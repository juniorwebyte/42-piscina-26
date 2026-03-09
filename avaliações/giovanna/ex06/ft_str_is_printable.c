/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 21:41:02 by audgiova          #+#    #+#             */
/*   Updated: 2026/03/07 15:24:47 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);
int	ft_ascii(char c);
int	ft_strlen(char *str);

/* int	main(void)
{
	printf("%d\n", ft_str_is_printable("TESTE"));
	printf("%d\n", ft_str_is_printable("testA"));
	printf("%d\n", ft_str_is_printable("teste123"));
} */

int	ft_ascii(char c)
{
	int	ascii_num;

	ascii_num = 32;
	while (ascii_num <= 126)
	{
		if (c == ascii_num)
		{
			return (1);
		}
		ascii_num++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		c += ft_ascii(str[i]);
		i++;
	}
	if (c == ft_strlen(str))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
