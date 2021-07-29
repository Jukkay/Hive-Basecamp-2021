/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:48:22 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/28 17:57:26 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <fcntl.h>

int		ft_get_input_y(char *filename)
{
	t_write var;

	var.x = 0;
	var.y = 0;
	if ((var.fd = open(filename, O_RDONLY)) < 0)
		return (0);
	while ((var.ret = read(var.fd, &var.buf, 1)) > 0)
	{
		if (var.buf == '\n')
			var.y++;
	}
	if (var.ret > 0 && var.buf != '\n')
		var.y++;
	close(var.fd);
	return (var.y);
}

int		ft_get_input_x(char *filename)
{
	t_write var;
	int		max_x;

	var.y = ft_get_input_y(filename);
	var.i = 0;
	max_x = 0;
	if ((var.fd = open(filename, O_RDONLY)) < 0)
		return (0);
	while (var.i <= var.y)
	{
		var.x = 0;
		while ((var.ret = read(var.fd, &var.buf, 1)) > 0 && var.buf != '\n')
			var.x++;
		if (var.x > max_x)
			max_x = var.x;
		var.i++;
	}
	close(var.fd);
	return (max_x);
}

char	**ft_build_array(char *filename)
{
	char	**arr;
	t_point	var;
	int		i;

	var.x = ft_get_input_x(filename);
	var.y = ft_get_input_y(filename);
	if (var.x == 0 || var.y == 0)
		return (NULL);
	arr = malloc(sizeof(char *) * var.y + 1);
	i = 0;
	while (i < var.y)
	{
		arr[i] = malloc(sizeof(char) * var.x);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

void	ft_write_to_array(char **arr, char *filename)
{
	t_write var;

	var.x = ft_get_input_x(filename);
	var.y = ft_get_input_y(filename);
	if ((var.fd = open(filename, O_RDONLY)) < 0)
		return ;
	var.i = 0;
	while (var.i < var.y)
	{
		var.i2 = 0;
		while ((var.ret = read(var.fd, &var.buf, 1)) > 0 && var.i2 < var.x)
		{
			arr[var.i][var.i2] = var.buf;
			if (arr[var.i][var.i2] == '\n')
				break ;
			var.i2++;
		}
		if (var.ret < 0)
			return ;
		arr[var.i][var.i2] = '\0';
		var.i++;
	}
	close(var.fd);
}

char	**ft_read_input(char *filename)
{
	char	**arr;

	arr = NULL;
	arr = ft_build_array(filename);
	if (!arr)
		return (NULL);
	ft_write_to_array(arr, filename);
	return (arr);
}
