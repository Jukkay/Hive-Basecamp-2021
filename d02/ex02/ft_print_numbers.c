/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:57:55 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/08 15:37:26 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, char ic);

void	ft_print_numbers(void)
{
	int i;
	char ic;

	i = 0;
	ic = '0';
	while (i <= 9)
	{
		ft_putchar(i, ic);
		i++;
	}
}

void	ft_putchar(int i, char ic)
{
	ic = i + '0';
	write(1, &ic, 1);
	i = ic - '0';
}
