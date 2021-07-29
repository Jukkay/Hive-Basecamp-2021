/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 08:12:13 by tlahin            #+#    #+#             */
/*   Updated: 2021/07/25 20:00:03 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# define BUF_SIZE 10240

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_print
{
	int print;
	int width;
	int height;
}				t_print;

char			*ft_read_stdin(char *stdin);
char			*ft_strcpy(char *dest, char *src);
int				ft_height(char *str);
int				ft_width(char *str);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
t_print			ft_detective_r00(char *stdin);
t_print			ft_detective_r01(char *stdin);
t_print			ft_detective_r02(char *stdin);
t_print			ft_detective_r03(char *stdin);
t_print			ft_detective_r04(char *stdin);
char			*ft_orig_r00(char *str, t_print xy);
char			*ft_orig_r01(char *str, t_print xy);
char			*ft_orig_r02(char *str, t_print xy);
char			*ft_orig_r03(char *str, t_print xy);
char			*ft_orig_r04(char *str, t_print xy);
void			ft_print_result(int res, t_print pdata);

#endif
