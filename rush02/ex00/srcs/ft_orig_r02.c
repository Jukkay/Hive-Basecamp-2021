/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orig_r02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 08:11:56 by altikka           #+#    #+#             */
/*   Updated: 2021/07/25 14:48:49 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		print_horizontal_2(int x, char start, char middle,
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

int		print_vertical_2(int x, char verical_dash, char *str, int i)
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

char	*ft_orig_r02(char *str, int x, int y)
{
	int		i;

	i = 0;
	if (y-- >= 1)
	{
		i = print_horizontal_2(x, 'A', 'B', 'A', str, i);
		while (y-- >= 2)
		{
			i = print_vertical_2(x, 'B', str, i);
		}
		if (y == 0)
		{
			i = print_horizontal_2(x, 'C', 'B', 'C', str, i);
		}
	}
	if (str == NULL)
		return ((char *)NULL);
	str[i] = '\0';
	return (str);
}
