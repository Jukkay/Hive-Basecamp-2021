/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:25:43 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/15 13:29:22 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_range(int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int count;
	int i;
	int *array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		count = count_range(min, max);
		array = (int *)malloc(count * sizeof(int));
		i = 0;
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
		*range = array;
	}
	return (count);
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
