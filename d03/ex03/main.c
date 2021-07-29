/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:11:17 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/10 10:16:39 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);


int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 9;
	b = 6;
	div = &a;
	mod = &b;
	
	ft_div_mod(a, b, div, mod);
	//printf("%d %d", a, b);
	return (0);
}
