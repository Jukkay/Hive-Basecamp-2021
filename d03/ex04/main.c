/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:50:46 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/09 14:01:55 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 40;
	d = 6;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);

	return (0);
}