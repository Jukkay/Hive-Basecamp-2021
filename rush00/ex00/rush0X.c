/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:49:33 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/11 09:41:29 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rush(int a, int b)
{
	int padding_width;
	int padding_height;
	
	padding_width = a;
	padding_height = b;

	//if (a, b <= 0)
	//	return (0);
	
	ft_putchar('o');
	padding_width -= 2;
	
	while (padding_width >= 1)
	{
		ft_putchar('-');
		padding_width --;
	}
	ft_putchar('o');
	ft_putchar('\n');
	padding_width -= 2;

	while (padding_height >= 1)
	{
		ft_putchar('|');
		padding_height = a;

		while(padding_height >= 1)
		{
			ft_putchar(' ');
			padding_height --;
		}
		ft_putchar('|');
		ft_putchar('\n');
		padding_h --;
	}
	return(0);
}
