/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_legend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:45:50 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/28 18:30:29 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "helpers.h"

t_legend	*parse_map_legend(char *legend)
{
	t_legend	*result;
	int			length;

	result = (t_legend*)malloc(sizeof(result));
	if (!result)
		return (NULL);
	length = ft_strlen(legend);
	if (length < 4)
		return (NULL);
	result->empty = legend[length - 3];
	result->obstacle = legend[length - 2];
	result->full = legend[length - 1];
	legend[length - 3] = '\0';
	result->lines = ft_atoi(legend);
	return (result);
}
