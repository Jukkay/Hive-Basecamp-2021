/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 07:21:13 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/10 17:00:55 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int ft_fibonacci(int index);

int main (void)
{
	int index;
	int b;
	
	clock_t t;
    t = clock();
    	
	index = 9;
	b = ft_fibonacci(index);
	printf("Fibonacci for %d is %d \n", index, b);
	index = 5;
	b = ft_fibonacci(index);
	printf("Fibonacci for %d is %d \n", index, b);
	index = 4;
	b = ft_fibonacci(index);
	printf("Fibonacci for %d is %d \n", index, b);
	index = 3;
	b = ft_fibonacci(index);
	printf("Fibonacci for %d is %d \n", index, b);
	index = 2;
	b = ft_fibonacci(index);
	printf("Fibonacci for %d is %d \n", index, b);
	index = 1;
	b = ft_fibonacci(index);
	printf("Fibonacci for %d is %d \n", index, b);
	index = 0;
	b = ft_fibonacci(index);
	printf("Fibonacci for %d is %d \n", index, b);
	
		
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Power: %lf\n", time_taken);
	
	return (0);
}