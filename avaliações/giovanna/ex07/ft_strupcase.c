/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 22:39:55 by audgiova          #+#    #+#             */
/*   Updated: 2026/03/07 15:25:11 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strupcase(char *str);
int		ft_ascii(char c);

/* int	main(void)
{
	char str[] = "Hello World";
	printf("Passando o texto para maiuscula: %s", ft_strupcase(str));
	return (0);
} */

char	*ft_strupcase(char *str)
{
	int		low;

	low = 0;
	while (str[low] != '\0')
	{
		if (ft_ascii(str[low]) != 0)
		{
			str[low] = ft_ascii(str[low]);
		}
		low++;
	}
	str[low] = '\0';
	return (str);
}

int	ft_ascii(char c)
{
	int	ascii_num;

	ascii_num = 65;
	while (ascii_num <= 90)
	{
		if ((c - 32) == ascii_num)
		{
			return (ascii_num);
		}
		ascii_num++;
	}
	return (0);
}
