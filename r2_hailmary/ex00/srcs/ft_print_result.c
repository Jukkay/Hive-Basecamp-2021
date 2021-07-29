/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 12:50:16 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/25 20:04:30 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_print_result(int res, t_print pdata)
{
	ft_putstr("[rush-0");
	ft_putnbr(res);
	ft_putstr("] [");
	ft_putnbr(pdata.width);
	ft_putstr("] [");
	ft_putnbr(pdata.height);
	ft_putstr("]");
}
