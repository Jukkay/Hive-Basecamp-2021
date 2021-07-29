/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 09:01:07 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/20 10:06:38 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));
int is_smaller(int a, int b);

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5}; -4
	int arr[5] = {1, 2, 3, 4, 10}; -9
	int arr[5] = {1, 2, 1, 4, 5}; -4
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr;
	int i;
	int ret;
	int length;

	i = 0;
	length = 5;
	ptr = arr;
	ret = ft_is_sort(ptr, length, &is_smaller);
	printf("returned %d\n", ret);
	return(0);
}

int is_smaller(int a, int b)
{
	return (a - b);
}
