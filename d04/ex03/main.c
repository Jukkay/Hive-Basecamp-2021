/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 07:21:13 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/10 14:23:30 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int ft_recursive_power(int nb, int power);

int main (void)
{
	int nb;
	int b;
	int power;
	
	clock_t t;
    t = clock();
    	
	nb = 2;
	power = -7;
	b = ft_recursive_power(nb, power);
	printf("Power: %d \n", b);
	nb = 2;
	power = 0;
	b = ft_recursive_power(nb, power);
	printf("Power: %d \n", b);
	nb = 2;
	power = 1;
	b = ft_recursive_power(nb, power);
	printf("Power: %d \n", b);
	nb = 2;
	power = 30;
	b = ft_recursive_power(nb, power);
	printf("Power: %d \n", b);
	
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Power: %lf\n", time_taken);
	
	return (0);
}