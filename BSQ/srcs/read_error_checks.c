/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_error_checks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 11:46:39 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/28 18:07:50 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "helpers.h"

int	check_same_length(char **map, t_legend *legend)
{
	int i;
	int previous_length;

	i = 1;
	previous_length = -1;
	while (i <= legend->lines)
	{
		if (previous_length == -1)
			previous_length = ft_strlen(map[i]);
		else if (previous_length != ft_strlen(map[i]))
			return (-1);
		i++;
	}
	return (0);
}

int	check_line_count(char **map, t_legend *legend)
{
	int i;

	i = 0;
	while (map[i])
		i++;
	return (legend->lines - (i - 1));
}

int	is_char_invalid(char *c, t_legend *legend)
{
	return (!(*c == legend->empty ||
			*c == legend->obstacle ||
			*c == legend->full));
}

int	check_for_invalid_chars(char **map, t_legend *legend)
{
	int i;
	int o;

	i = 1;
	while (map[i])
	{
		o = 0;
		while (map[i][o])
		{
			if (is_char_invalid(&map[i][o], legend))
				return (-1);
			o++;
		}
		i++;
	}
	return (0);
}

int	is_valid_map(char **map, t_legend *legend)
{
	if (legend->lines <= 0)
		return (-1);
	if (check_line_count(map, legend) != 0)
		return (-1);
	if (check_same_length(map, legend) != 0)
		return (-1);
	if (check_for_invalid_chars(map, legend) != 0)
		return (-1);
	return (0);
}
