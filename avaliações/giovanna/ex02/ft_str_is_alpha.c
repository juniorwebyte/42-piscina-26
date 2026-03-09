/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:44:02 by audgiova          #+#    #+#             */
/*   Updated: 2026/03/07 15:23:54 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

int	ft_str_is_alpha(char *str);

int	ft_isalpha(char c);

int	ft_strlen(char *str);

/* int	main(void)
{
	printf("%d\n", ft_str_is_alpha("Hello"));
	return (0);
} */

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

int	ft_isalpha(char c)
{
	int		letter;
	char	*alpha;

	letter = 0;
	alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (alpha[letter] != '\0')
	{
		if (c == alpha[letter])
		{
			return (1);
		}
		letter++;
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int		letter;
	int		cont;

	letter = 0;
	cont = 0;
	while (str[letter] != '\0')
	{
		cont += ft_isalpha(str[letter]);
		letter++;
	}
	if (cont == ft_strlen(str))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
