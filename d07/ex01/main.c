/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:10:52 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/14 16:07:18 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);
int	count_range(int min, int max);

int	main(void)
{
	int min;
	int max;
	int *array;
	int i;
	int n;

	min = 100;
	max = -100;
	
	printf("Min: %d\n", min);
	printf("Max: %d\n", max);
	array = ft_range(min, max);
	i = 0;
	n = count_range(min, max);
	while(i < n)
	{
		printf("Array: %d\n", array[i]);
		i++;
	}
}