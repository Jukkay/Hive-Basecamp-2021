/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:11:17 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/10 10:11:11 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 9;
	d = 6;
	a = &c;
	b = &d;
	printf("%d %d", *a, *b);
	ft_swap(a, b);
	return (0);
}
