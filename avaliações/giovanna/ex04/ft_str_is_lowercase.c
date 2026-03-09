/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 21:41:02 by audgiova          #+#    #+#             */
/*   Updated: 2026/03/07 15:24:24 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str);
int	ft_ascii(char c);
int	ft_strlen(char *str);

/* int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("teste"));
	printf("%d\n", ft_str_is_lowercase("testA"));
	printf("%d\n", ft_str_is_lowercase("teste123"));
} */

int	ft_ascii(char c)
{
	int	ascii_num;

	ascii_num = 97;
	while (ascii_num <= 122)
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

int	ft_str_is_lowercase(char *str)
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
