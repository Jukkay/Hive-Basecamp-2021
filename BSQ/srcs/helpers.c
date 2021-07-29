/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:10:18 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/28 12:11:21 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int	count_newlines(char *string)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (string[i])
	{
		if (string[i] == '\n')
			result++;
		i++;
	}
	return (result);
}
