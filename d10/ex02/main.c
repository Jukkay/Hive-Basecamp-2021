/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 12:14:09 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/20 07:34:32 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int));
int addition(int num);
void	ft_putnbr(int nb);

int main(void)
{
	int tab[10];
	int *ptr;
	int *ret;
	int i;
	int length;

	i = 0;
	length = 10;
	while (i < length)
	{
		tab[i] = i;
		ft_putnbr(tab[i]);
		i++;
	}
	printf("\n");
	ptr = tab;
	ret = ft_map(ptr, 10, &addition);
	i = 0;
	while (i < length)
	{
		ft_putnbr(ret[i]);
		i++;
	}
	return(0);
}

int addition(int num)
{
	num++;
	return(num);
}
