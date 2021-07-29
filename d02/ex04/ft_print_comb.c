/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:08:37 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/16 06:06:12 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (int i, char ic);

void ft_print_comb (void)
{
	int 1;
	char ic;

	
	
}

void ft_putchar (int i, char ic)
{
	ic = i + '0';
	write(1, &ic, 1);
	i = ic - '0';
}