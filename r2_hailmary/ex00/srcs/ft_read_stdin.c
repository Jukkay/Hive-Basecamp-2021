/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 12:33:52 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/25 15:25:21 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	*ft_read_stdin(char *stdin)
{
	int		ret;
	int		i;
	char	c;

	i = 0;
	c = ' ';
	while ((ret = read(0, &c, 1)))
	{
		stdin[i] = c;
		i = i + ret;
	}
	stdin[i] = '\0';
	return (stdin);
}
