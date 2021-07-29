/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_print_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 06:16:31 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/26 07:04:39 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_make_print_str(char *str, int res, t_print pdata)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	str[i] = '[';
		i++;
	str[i] = 'r';
	i++;
	str[i] = 'u';
	i++;
	str[i] = 's';
	i++;
	str[i] = 'h';
	i++;
	str[i] = '-';
	i++;
	str[i] = '0';
	i++;
	c = res + '0';
	str[i] = c;
	i++;
	str[i] = ']';
	i++;
	str[i] = ' ';
	i++;
	str[i] = '[';
	i++;
	c = pdata.width + '0';
	str[i] = c;
	i++;
	str[i] = ']';
	i++;
	str[i] = ' ';
	i++;
	str[i] = '[';
	i++;
	c = pdata.height + '0';
	str[i] = c;
	i++;
	str[i] = ']';
	ft_putnbr(pdata.height);
	ft_putstr("]");

}