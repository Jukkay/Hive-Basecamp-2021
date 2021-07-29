/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 12:47:05 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/25 19:56:14 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main(void)
{
	char	*stdin;
	char	*str;
	t_print pdata;

	stdin = malloc(BUF_SIZE + 1);
	str = ft_read_stdin(stdin);
	pdata = ft_detective_r00(str);
	if (pdata.print == 1)
		ft_print_result(0, pdata);
	pdata = ft_detective_r01(str);
	if (pdata.print == 1)
		ft_print_result(1, pdata);
	pdata = ft_detective_r02(str);
	if (pdata.print)
		ft_print_result(2, pdata);
	if (pdata.print == 1)
	{
		pdata = ft_detective_r03(str);
		if (pdata.print)
		{
			ft_putstr(" || ");
			ft_print_result(3, pdata);
		}
	}
	else
	{
		pdata = ft_detective_r03(str);
		if (pdata.print)
			ft_print_result(3, pdata);
	}
	if (pdata.print == 1)
	{
		pdata = ft_detective_r04(str);
		if (pdata.print)
		{
			ft_putstr(" || ");
			ft_print_result(4, pdata);
		}
	}
	else
	{
		pdata = ft_detective_r04(str);
		if (pdata.print)
			ft_print_result(4, pdata);
	}
	ft_putchar('\n');
	free(stdin);
	return (0);
}
