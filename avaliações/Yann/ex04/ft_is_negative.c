/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:54:03 by yvasques          #+#    #+#             */
/*   Updated: 2026/03/06 17:00:19 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n >= 0)
		write (1, &positive, 1);
	else
		write (1, &negative, 1);
}
int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-1);
	ft_is_negative(0);
	return (0);
}