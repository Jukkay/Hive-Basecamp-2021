/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:10:52 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/16 16:18:53 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);
int	count_range(int min, int max);

int	main(void)
{
	int min;
	int max;
	int count;
	int *array;
	int **range;
	//int i;

	min = 51;
	max = 50;
	range = &array;
	count = ft_ultimate_range(range, min, max);
	
	printf("Min: %d\n", min);
	printf("Max: %d\n", max);
	printf("Count: %d\n", count);
	
	// i = 0;
	//if (*(array + 1) == 0)
	//	printf("Array: %d\n", *(array + i));
	//else
	//{
	//	while (i <= count)
	//	{
	//		printf("Array: %d\n", *(array + i));
	//		i++;
	//	}
	//} 
	return(0);
}
