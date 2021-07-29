/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 06:47:19 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/28 18:39:40 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "helpers.h"

t_result	*solve(char **map, t_point *size, t_legend *legend)
{
	t_point		*cursor;
	t_result	*best;
	t_result	*current;

	if (size->x == 1 && size->y == 1 && map[0][0] == legend->empty)
		return (form_result(0, 0, 1));
	cursor = get_cursor();
	if (!cursor)
		return (NULL);
	best = NULL;
	current = NULL;
	while (cursor->y < size->y)
	{
		while (cursor->x < size->x)
		{
			if ((current = test_positions(cursor, size, map, legend)))
				best = compare(best, current);
			cursor->x += 1;
		}
		set_cursor_to_next_line(cursor);
	}
	free(cursor);
	if (best != current)
		free(current);
	return (best);
}

t_result	*compare(t_result *best, t_result *current)
{
	if (!best)
		return (current);
	else if (current->size > best->size)
	{
		free(best);
		return (current);
	}
	else
		return (best);
}

t_result	*test_positions(t_point *start, t_point *size, char **map, \
			t_legend *legend)
{
	int			x;
	int			y;
	int			current;

	current = 0;
	while (current < min(size->x, size->y))
	{
		if (!((start->y + current) < size->y && (start->x + current) < size->x))
			return (form_result(start->x, start->y, current));
		y = start->y - 1;
		while (y++ < start->y + current)
		{
			x = start->x - 1;
			while (x++ < start->x + current)
			{
				if (map[y][x] != legend->empty)
					return (form_result(start->x, start->y, current));
			}
		}
		current++;
	}
	return (form_result(start->x, start->y, current));
}

t_result	*form_result(int x, int y, int size)
{
	t_result *result;

	result = (t_result*)malloc(sizeof(t_result));
	result->x = x;
	result->y = y;
	result->size = size;
	return (result);
}
