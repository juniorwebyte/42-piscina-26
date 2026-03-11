/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:28:34 by jode-fig          #+#    #+#             */
/*   Updated: 2026/03/11 19:26:17 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			printf("\\%02x", (unsigned char)str[i]);
		else
			putchar(str[i]);
		i++;
	}
}

/* int	main(void)
{
	char	str[] = "Hello, World!\nThis is a test string with non-printable characters.\tEnd of string.";

	printf("Original string: %s\n", str);
	printf("String with non-printable characters shown as hex:\n");
	ft_putstr_non_printable(str);
	printf("\n");
	return (0);
} */
