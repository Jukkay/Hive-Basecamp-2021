/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 06:26:22 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/28 18:00:38 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_write
{
	int			y;
	int			x;
	int			fd;
	int			i;
	int			i2;
	char		buf;
	int			ret;
}				t_write;

typedef struct	s_result
{
	int			x;
	int			y;
	int			size;
}				t_result;

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

typedef struct	s_legend
{
	char		empty;
	char		obstacle;
	char		full;
	int			lines;
}				t_legend;

t_result		*solve(char **map, t_point *size, t_legend *legend);
t_result		*form_result(int x, int y, int size);
t_legend		*parse_map_legend(char *legend);
t_result		*compare(t_result *best, t_result *current);
char			**ft_read_input(char *filename);
char			**read_stdin();
t_point			*get_cursor(void);
int				is_valid_map(char **map, t_legend *legend);
t_result		*test_positions(t_point *start, t_point *size, char **map,\
								t_legend *legend);
void			print_solution(char **map, t_point *size, t_result *result,\
								t_legend *legend);
void			ft_get_input_from_stdin(char *buf);
int				ft_input_check(char **input);

#endif
