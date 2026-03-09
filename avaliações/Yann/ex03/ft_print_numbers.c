/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:53:33 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/06 16:57:42 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{	
	char	num;

	num = '0';
	while (num <= '9')
	{
		write (1, &num, 1);
		num = num + 1;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
