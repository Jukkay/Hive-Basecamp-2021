/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 07:24:27 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/27 11:33:57 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_solution(char **map, t_point *size, t_result *result, \
						t_legend *legend)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < size->y)
	{
		while (x < size->x)
		{
			if (x >= result->x && x < result->x + result->size &&
				y >= result->y && y < result->y + result->size)
				write(1, &legend->full, 1);
			else
				write(1, &map[y][x], 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
		x = 0;
	}
}
