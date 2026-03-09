/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:18:25 by audgiova          #+#    #+#             */
/*   Updated: 2026/03/07 15:26:45 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

char	*ft_strcpy(char *dest, char *src);

/* int	main(void)
{
	char	*str1 = "Hello World";
	char	str2[30];

	ft_strcpy(str2, str1);
	printf("%s\n", str1);
	printf("%s\n", str2);
	return (0);
} */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
