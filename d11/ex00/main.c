/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:22:20 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/21 08:42:33 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main(void)
{
	t_list *head;
	void *data;
	int a;
	int b;
	// int c;
	
	a = 3;
	b = 4;
	data = &b;
	head = malloc(sizeof(t_list));
	head -> data = &a;
	head -> next = NULL;
	printf("next: %d\n", (int)head -> next);
	head -> next = ft_create_elem("abc");
	// printf("head data: %d\n", head -> data);
	printf("head next data: %s\n", (char *) head->next->data);
	
	return (0);
}