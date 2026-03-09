/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:38:08 by audgiova          #+#    #+#             */
/*   Updated: 2026/03/07 15:25:19 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

char	*ft_strlowcase(char *str);
int		ft_ascii(char c);

/* int	main(void)
{
	char str[] = "Hello World";
	printf("Passando o texto para maiuscula: %s", ft_strlowcase(str));
	return (0);
} */

char	*ft_strlowcase(char *str)
{
	int	upp;

	upp = 0;
	while (str[upp] != '\0')
	{
		if (ft_ascii(str[upp]) != 0)
		{
			str[upp] = ft_ascii(str[upp]);
		}
		upp++;
	}
	return (str);
}

int	ft_ascii(char c)
{
	int	ascii_num;

	ascii_num = 97;
	while (ascii_num <= 122)
	{
		if ((c + 32) == ascii_num)
		{
			return (ascii_num);
		}
		ascii_num++;
	}
	return (0);
}
