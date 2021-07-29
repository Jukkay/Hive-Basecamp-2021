/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 16:46:11 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/28 18:33:20 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "helpers.h"

int		is_valid(char **map, t_legend *legend)
{
	if (!legend)
		return (-1);
	if (is_valid_map(map, legend) != 0)
		return (-1);
	return (0);
}

int		print_map(char **map)
{
	t_legend	*legend;
	t_point		*size;
	t_result	*solve_result;

	if (!map)
		return (-1);
	legend = parse_map_legend(map[0]);
	if (is_valid(map, legend) != 0)
		return (-1);
	size = malloc(sizeof(t_point));
	if (!size)
		return (-1);
	size->x = ft_strlen(map[1]);
	size->y = legend->lines;
	solve_result = solve(map + 1, size, legend);
	if (!solve_result)
		return (-1);
	print_solution(map + 1, size, solve_result, legend);
	free(legend);
	free(size);
	free(solve_result);
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 1)
	{
		if (print_map(read_stdin()) == -1)
			write(2, "map error\n", 10);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (print_map(ft_read_input(argv[i])) == -1)
			write(2, "map error\n", 10);
		i++;
		if (i < argc)
			write(1, "\n", 1);
	}
	return (0);
}
