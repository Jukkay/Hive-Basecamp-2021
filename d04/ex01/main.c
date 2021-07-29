/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:47:46 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/10 12:47:37 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int main (void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	
	a = -97;
	b = 27;
	c = 0;
	d = 1;
	e = 2;
	f = 12;
	a = ft_recursive_factorial(a);
	printf("Factorial: %d \n", a);
	b = ft_recursive_factorial(b);
	printf("Factorial: %d \n", b);
	c = ft_recursive_factorial(c);
	printf("Factorial: %d \n", c);
	d = ft_recursive_factorial(d);
	printf("Factorial: %d \n", d);
	e = ft_recursive_factorial(e);
	printf("Factorial: %d \n", e);
	f = ft_recursive_factorial(f);
	printf("Factorial: %d \n", f);
	return (0);
}