/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 07:44:40 by altikka           #+#    #+#             */
/*   Updated: 2021/07/25 11:14:45 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_putnbr(int nb)
{
	if (nb < 2147483647 || nb > -2147483648)
	{
		if (nb < 0)
		{
			if (nb == -2147483648)
			{
				ft_putchar('-');
				ft_putchar('2');
				ft_putnbr(147483648);
			}
			else
			{
				ft_putchar('-');
				ft_putnbr(-nb);
			}
		}
		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_putchar(nb + '0');
	}
}
