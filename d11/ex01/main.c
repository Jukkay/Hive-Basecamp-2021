/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 16:29:34 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/20 16:57:45 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main(void)
{
	t_list *head;
	t_list *node;
	void *data;
	t_list *ptr;
	int a;
	int b;
	int c;
	
	a = 3;
	b = 4;
	c = 40;
	data = &c;
	head = malloc(sizeof(t_list));
	head -> data = &a;
	head -> next = NULL;

	node = malloc(sizeof(t_list));
	node -> data = &b;
	node -> next = NULL;
	head->next = node;
	
	printf("head data: %d\n", *(int*)head->data);
	printf("head next data: %d\n", *(int*)head->next->data);
	
	ft_list_push_back(&head, data);
	ptr = head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	data = ptr->data;
	printf("last node data: %d\n", *(int*)head->next->next->data);
	
	return (0);
}