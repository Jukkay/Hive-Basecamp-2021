/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:47:51 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/20 08:59:20 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (*tab)
	{
		if (f(*tab))
		{
			count++;
			tab++;
		}
		else
			tab++;
	}
	if (count > 0)
		return (count);
	return (0);
}
