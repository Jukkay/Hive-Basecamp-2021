/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 06:38:24 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/22 19:48:12 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			nb = 147483648;
			int_to_char(nb);
		}
		else
		{
			ft_putchar('-');
			nb *= (-1);
			int_to_char(nb);
		}
	}
	else if (nb <= 9)
		ft_putchar(nb + '0');
	else
		int_to_char(nb);
}

int		find_divider(int nb)
{
	if (nb >= 10 && nb < 100)
		return (10);
	else if (nb >= 100 && nb < 1000)
		return (100);
	else if (nb >= 1000 && nb < 10000)
		return (1000);
	else if (nb >= 10000 && nb < 100000)
		return (10000);
	else if (nb >= 100000 && nb < 1000000)
		return (100000);
	else if (nb >= 1000000 && nb < 10000000)
		return (1000000);
	else if (nb >= 10000000 && nb < 100000000)
		return (10000000);
	else if (nb >= 100000000 && nb < 1000000000)
		return (100000000);
	else if (nb >= 1000000000)
		return (1000000000);
	else
		return (0);
}

void	int_to_char(int nb)
{
	int		divider;
	int		temp;
	char	print_ch;

	divider = find_divider(nb);
	while (divider >= 1)
	{
		temp = nb / divider;
		nb %= divider;
		divider /= 10;
		print_ch = temp + '0';
		ft_putchar(print_ch);
	}
}
