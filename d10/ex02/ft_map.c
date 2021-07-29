/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:14:10 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/20 07:33:03 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *ptr;

	i = 0;
	ptr = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		ptr[i] = (*f)(tab[i]);
		i++;
	}
	return (ptr);
}
