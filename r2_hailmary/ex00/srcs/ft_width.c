/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlahin <tlahin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 14:30:12 by tlahin            #+#    #+#             */
/*   Updated: 2021/07/25 08:21:54 by tlahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_width(char *str)
{
	int i;
	int width;

	i = 0;
	width = 0;
	while (str[i] != '\n')
	{
		if (str[i])
			width++;
		i++;
	}
	return (width);
}
