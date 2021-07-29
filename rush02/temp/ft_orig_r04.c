/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orig_r04.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 08:11:56 by altikka           #+#    #+#             */
/*   Updated: 2021/07/25 12:44:01 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		print_horizontal_4(int x, char start, char middle,
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

int		print_vertical_4(int x, char verical_dash, char *str, int i)
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

char	*ft_orig_r04(char *str, int x, int y)
{
	int		i;

	i = 0;
	if (y-- >= 1)
	{
		i = print_horizontal_4(x, 'A', 'B', 'C', str, i);
		while (y-- >= 2)
		{
			i = print_vertical_4(x, 'B', str, i);
		}
		if (y == 0)
		{
			i = print_horizontal_4(x, 'C', 'B', 'A', str, i);
		}
	}
	str[i] = '\0';
	return (str);
}
