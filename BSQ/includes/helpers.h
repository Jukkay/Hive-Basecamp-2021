/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:11:36 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/28 18:40:02 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H

# include <stdlib.h>
# include "bsq.h"

typedef	struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

int					max(int a, int b);
int					min(int a, int b);
int					count_newlines(char *string);
int					ft_atoi(char *str);
int					ft_strlen(char *str);
void				ft_list_clear(t_list *begin_list);
void				ft_list_push_back(t_list **begin_list, char data);
int					ft_list_size(t_list *begin_list);
t_list				*ft_create_elem(char data);
t_point				*get_cursor(void);
void				set_cursor_to_next_line(t_point *cursor);

#endif
