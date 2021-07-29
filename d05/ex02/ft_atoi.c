/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:29:50 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/13 16:58:30 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int pluspos;
	int temp;
	int i;

	temp = 0;
	if (str[0] == '-')
	{
		pluspos = -1;
		i = 1;
	}
	else
	{
		pluspos = 1;
		i = 0;
	}
	while (str[i] != '\0')
	{
		temp = temp * 10 + str[i] - '0';
		i++;
	}
	return (temp * pluspos);
}
