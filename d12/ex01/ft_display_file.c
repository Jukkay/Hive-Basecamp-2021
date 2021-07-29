/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:18:22 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/22 19:13:22 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_display_file(char **argv)
{
	int			fd;
	int			ret;
	char		buf[BUF_SIZE + 1];
	extern int	errno;

	if ((fd = open(argv[1], O_RDONLY)) < 0)
		return (errno);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	write(1, "\n", 1);
	return (errno);
}
