/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:37:13 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/22 19:47:38 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# define BUF_SIZE 29996

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

int		ft_display_file(char **argv);
int		ft_input_check(int argc);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putchar(char c);
void	int_to_char(int nb);
int		find_divider(int nb);

#endif
