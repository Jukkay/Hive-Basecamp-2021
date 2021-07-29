/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:02:29 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/21 17:34:49 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main(void)
{
	t_list *head;
	t_list *node;
	t_list *node2;
	t_list *node3;
	void *data;
	t_list *ptr;
	int a;
	int b;
	int c;
	int d;
	int e;
	
	a = 10;
	b = 20;
	c = 30;
	d = 40;
	e = 50;

	head = malloc(sizeof(t_list));
	head -> data = &a;
	head -> next = NULL;

	node = malloc(sizeof(t_list));
	node -> data = &b;
	node -> next = NULL;
	head->next = node;

	node2 = malloc(sizeof(t_list));
	node2 -> data = &c;
	node2 -> next = NULL;
	head->next->next = node2;

	node3 = malloc(sizeof(t_list));
	node3 -> data = &d;
	node3 -> next = NULL;
	head->next->next->next = node3;
	
	ptr = head;
	while (ptr != NULL)
	{
		printf("ptr: %d\n", *(char*)ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
	data = &e;
	ft_list_push_front(&head, data);
	ptr = head;
	while (ptr != NULL)
	{
		printf("ptr: %d\n", *(int*)ptr->data);
		ptr = ptr->next;
	}
	return (0);
}