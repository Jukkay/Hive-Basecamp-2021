/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:04:49 by tpinola           #+#    #+#             */
/*   Updated: 2021/07/11 15:10:13 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int print_x (int a)
{
	int padding_width;
	
	padding_width = a;
	padding_width -= 2;
	ft_putchar('o');
	while (padding_width >= 1)
	{
		ft_putchar('-');
		padding_width--;
	}
	padding_width = a;
	if (padding_width >= 2)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
	return(0);
}

int print_y (int a, int b)
{
	int padding_width;
	int padding_height;
	
	padding_width = a;
	padding_height = b;
	//padding_height -= 2;
	//padding_width -= 2;
	
	if (padding_height <= 2)
		return(0);
	//if (padding_width == 1)
	//{
	//	padding_height -= 2;
	//	while (padding_height >= 1)
	//	{
	////		ft_putchar('|');
	//		padding_height--;
	//		ft_putchar('\n');
	//	}
	//}
	padding_height -= 2;
	while (padding_height >= 1)
	{
		ft_putchar('|');
		padding_width -= 2;
		while (padding_width >= 1)
		{
			ft_putchar(' ');
			padding_width--;
			if (padding_width == 0)
			{
				ft_putchar('|');
				ft_putchar('\n');
			}
		}
		padding_height--;
		padding_width = a;
	}
	return (0);
}	

int print_bottom_line (int a, int b)
{
	int padding_width;
	int padding_height;
	
	padding_width = a;
	padding_height = b;
	//padding_height -= 2;
	//padding_width -= 2;
	
	if (padding_height == 1)
		return (0);
	padding_width = a;
	padding_width -= 2;
	ft_putchar('o');
	while (padding_width >= 1)
	{
		ft_putchar('-');
		padding_width--;
	}
	padding_width = a;
	if (padding_width >= 2)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
	return(0);
}

int	rush(int a, int b)
{
	if (a <= 0 || b <= 0)
	{
		return (0);
	}

	print_x (a);
	print_y (a,b);
	print_bottom_line (a,b);
	return(0);
}
