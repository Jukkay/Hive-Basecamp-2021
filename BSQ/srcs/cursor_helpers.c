/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cursor_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 18:37:59 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/28 18:41:07 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "helpers.h"

t_point		*get_cursor(void)
{
	t_point		*cursor;

	cursor = (t_point*)malloc(sizeof(t_point));
	if (!cursor)
		return (NULL);
	cursor->x = 0;
	cursor->y = 0;
	return (cursor);
}

void		set_cursor_to_next_line(t_point *cursor)
{
	if (!cursor)
		return ;
	cursor->y += 1;
	cursor->x = 0;
}
