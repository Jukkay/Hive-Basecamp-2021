/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:36:56 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/14 16:06:37 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_range(int min, int max);

int	*ft_range(int min, int max)
{
	int *array;
	int i;
	int range;

	if (min >= max)
		return (NULL);
	else
	{
		range = count_range(min, max);
		array = (int *)malloc(range * sizeof(int));
		i = 0;
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
	}
	return (array);
}

int	count_range(int min, int max)
{
	int range;

	if (min < 0 && max >= 0)
	{
		min *= -1;
		range = min + max;
	}
	else if (min < 0 && max < 0)
	{
		min *= -1;
		max *= -1;
		range = min - max;
	}
	else
		range = max - min;
	return (range);
}
