/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-fig <jode-fig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:38:40 by gussilva          #+#    #+#             */
/*   Updated: 2026/03/03 15:30:48 by jode-fig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main(void){
    int a;
    int b;
    int divi;
    int modu;
    int *div;
    int *mod;

    a = 11;
    b = 2;
    div = &divi;
    mod = &modu;

    ft_div_mod(a, b, div, mod);
    printf("%d, %d\n", divi, modu);
}
