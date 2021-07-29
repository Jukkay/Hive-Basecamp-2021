/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orig_r00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 08:11:56 by altikka           #+#    #+#             */
/*   Updated: 2021/07/25 15:44:54 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		print_horizontal_0(int x, char start, char middle,
		char end, char *str, int i)
{
	if (x-- >= 1)
	{
		str[i++] = (start);
		while (x-- >= 2)
		{
			str[i++] = (middle);
		}
		if (x == 0)
		{
			str[i++] = (end);
		}
		str[i++] = ('\n');
	}
	return (i);
}

int		print_vertical_0(int x, char verical_dash, char *str, int i)
{
	if (x-- >= 1)
	{
		str[i++] = (verical_dash);
	}
	while (x-- >= 2)
	{
		str[i++] = (' ');
	}
	if (x == 0)
	{
		str[i++] = (verical_dash);
	}
	str[i++] = ('\n');
	return (i);
}

char	*ft_orig_r00(char *str, t_print xy)
{
	int		x;
	int		y;
	int		i;

	x = xy.width;
	y = xy.height;
	i = 0;
	if (y-- >= 1)
	{
		i = print_horizontal_0(x, 'o', '-', 'o', str, i);
		while (y-- >= 2)
		{
			i = print_vertical_0(x, '|', str, i);
		}
		if (y == 0)
		{
			i = print_horizontal_0(x, 'o', '-', 'o', str, i);
		}
	}
	if (str == NULL)
		return ((char *)NULL);
	str[i] = '\0';
	return (str);
}
