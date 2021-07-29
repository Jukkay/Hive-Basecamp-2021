/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 06:05:58 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/13 10:38:22 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putnbr(int nb);

int main (void)
{
	int nb;
	
	nb = 0;
	printf("nb: %d\n", nb);
	ft_putnbr(nb);
	printf("\n");
	
	nb = -2147483648;
	printf("nb: %d\n", nb);
	ft_putnbr(nb);
	printf("\n");
		
	nb = 2147483647;
	printf("nb: %d\n", nb);
	printf("\n");
	ft_putnbr(nb);
	printf("\n");
	
	nb = 19900000;
	printf("nb: %d\n", nb);
	printf("\n");
	ft_putnbr(nb);
	printf("\n");
	
	nb = 1000000;
	printf("nb: %d\n", nb);
	printf("\n");
	ft_putnbr(nb);
	printf("\n");
	
	nb = 299999;
	printf("nb: %d\n", nb);
	printf("\n");
	ft_putnbr(nb);
	printf("\n");
	
	nb = 99999;
	printf("nb: %d\n", nb);
	printf("\n");
	ft_putnbr(nb);
	printf("\n");
	
	nb = 9999;
	printf("nb: %d\n", nb);
	printf("\n");
	ft_putnbr(nb);
	printf("\n");

	nb = 999;
	printf("nb: %d\n", nb);
	printf("\n");
	ft_putnbr(nb);
	printf("\n");
	
	nb = 99;
	printf("nb: %d\n", nb);
	printf("\n");
	ft_putnbr(nb);
	printf("\n");

	nb = 9;
	printf("nb: %d\n", nb);
	printf("\n");
	ft_putnbr(nb);
	printf("\n");
}