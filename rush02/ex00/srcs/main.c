/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 12:47:05 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/25 15:25:30 by jylimaul         ###   ########.fr       */
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
	ft_detective_r00(str);
	ft_detective_r01(str);
	pdata = ft_detective_r02(str);
	if (pdata.print)
		ft_print_result(02, pdata);
	if (pdata.print == 1)
	{
		pdata = ft_detective_r03(str);
		if (pdata.print)
		{
			ft_putstr(" || ");
			ft_print_result(03, pdata);
		}
	}
	pdata = ft_detective_r03(str);
	if (pdata.print)
		ft_print_result(03, pdata);
	if (pdata.print == 1)
	{
		pdata = ft_detective_r04(str);
		if (pdata.print)
		{
			ft_putstr(" || ");
			ft_print_result(04, pdata);
		}
	}
	pdata = ft_detective_r04(str);
	if (pdata.print)
		ft_print_result(04, pdata);	
	ft_putchar('\n');
	free(stdin);
	return (0);
}
