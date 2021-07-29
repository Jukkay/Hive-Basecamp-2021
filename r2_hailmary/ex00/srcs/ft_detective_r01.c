/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detective_r01.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 20:26:22 by altikka           #+#    #+#             */
/*   Updated: 2021/07/25 20:01:48 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_print		ft_detective_r01(char *stdin)
{
	char	*original;
	int		len;
	int		width;
	int		height;
	t_print	data;

	data.width = ft_width(stdin);
	data.height = ft_height(stdin);
	len = ft_strlen(stdin);
	original = (char*)malloc(sizeof(char) * len + 1);
	if (original == NULL)
		return (data);
	original = ft_orig_r01(original, data);
	if (ft_strcmp(stdin, original) == 0)
		data.print = 1;
	else
		data.print = 0;
	free(original);
	return (data);
}
