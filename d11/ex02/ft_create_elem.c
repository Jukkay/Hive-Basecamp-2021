/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:08:57 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/20 15:36:39 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *link;

	link = NULL;
	if (!(link = malloc(sizeof(t_list))))
		return (NULL);
	link->data = data;
	link->next = NULL;
	return (link);
}
