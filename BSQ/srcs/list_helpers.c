/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 08:11:59 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/28 08:18:47 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

t_list	*ft_create_elem(char data)
{
	t_list *tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	tmp->data = data;
	tmp->next = NULL;
	return (tmp);
}

void	ft_list_clear(t_list *begin_list)
{
	t_list *current_element;
	t_list *temp;

	current_element = begin_list;
	while (current_element)
	{
		temp = current_element;
		current_element->next = NULL;
		free(current_element);
		current_element = temp->next;
	}
	begin_list = NULL;
}

void	ft_list_push_back(t_list **begin_list, char data)
{
	t_list *current_element;

	current_element = *begin_list;
	if (current_element)
	{
		while (current_element->next)
			current_element = current_element->next;
		current_element->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

int		ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*element;

	if (begin_list == NULL)
		return (0);
	element = begin_list;
	size = 1;
	while (element->next)
	{
		element = element->next;
		size++;
	}
	return (size);
}
