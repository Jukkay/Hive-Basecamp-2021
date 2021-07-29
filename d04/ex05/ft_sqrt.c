/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:06:46 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/10 19:46:13 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	double sqrt;
	double temp;
	double a;
	double b;

	temp = 0;
	sqrt = nb / 2;
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (nb / temp + temp) / 2;
	}
	a = (int)sqrt;
	b = sqrt - a;
	if (b != 0)
		return (0);
	else
		return (sqrt);
}
