/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 08:05:23 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/28 18:17:28 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "helpers.h"

char	*get_string_from_linked_list(t_list *first)
{
	char	*result;
	t_list	*cursor;
	int		length;
	int		i;

	i = 0;
	cursor = first;
	length = ft_list_size(first);
	result = (char*)malloc(sizeof(char*) * (length + 1));
	if (!result)
		return (NULL);
	while (i < length)
	{
		result[i] = (char)cursor->data;
		cursor = cursor->next;
		i++;
	}
	result[length] = '\0';
	return (result);
}

char	**get_string_array_from_string(char *string)
{
	char	**result;
	int		i;
	int		o;

	result = malloc(sizeof(char*) * count_newlines(string) + 1);
	if (!result)
		return (NULL);
	i = 0;
	o = 0;
	while (string[i])
	{
		result[o] = &string[i];
		while (string[i] != '\n' && string[i] != '\0')
			i++;
		string[i] = '\0';
		o++;
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**read_stdin(void)
{
	char	**result;
	char	*string;
	char	buffer[1];
	int		read_count;
	t_list	*list;

	list = NULL;
	while ((read_count = read(0, buffer, 1)) > 0)
		ft_list_push_back(&list, buffer[0]);
	if (list == NULL)
		return (NULL);
	string = get_string_from_linked_list(list);
	ft_list_clear(list);
	if (!string)
		return (NULL);
	result = get_string_array_from_string(string);
	return (result);
}
