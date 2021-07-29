/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:37:13 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/22 15:53:27 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# define BUF_SIZE 4096

# include <unistd.h>
# include <fcntl.h>

void	ft_display_file(char **argv);
int		ft_input_check(int argc);

#endif
