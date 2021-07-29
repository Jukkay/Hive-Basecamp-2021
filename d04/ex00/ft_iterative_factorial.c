/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:48:40 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/11 16:09:13 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int factorial;
	int i;

	factorial = 1;
	i = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		factorial = factorial * i;
		i++;
	}
	return (factorial);
}
