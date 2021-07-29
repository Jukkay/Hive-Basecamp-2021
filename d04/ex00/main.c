/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:47:46 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/11 16:10:40 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int main (void)
{
	int a;
	int b;
	int c;
	int d;
	
	a = 12;
	b = 13;
	c = 0;
	d = 1;
	a = ft_iterative_factorial(a);
	printf("Factorial: %d \n", a);
	b = ft_iterative_factorial(b);
	printf("Factorial: %d \n", b);
	c = ft_iterative_factorial(c);
	printf("Factorial: %d \n", c);
	d = ft_iterative_factorial(d);
	printf("Factorial: %d \n", d);
	return (0);
}