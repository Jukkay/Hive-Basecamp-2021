/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinola <tpinola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:04:49 by tpinola           #+#    #+#             */
/*   Updated: 2021/07/11 14:52:26 by tpinola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	widthx(int x)
{
	int		width;

	width = x - 2;
	ft_putchar('A');
	while (width >= 1)
	{
		ft_putchar('B');
		width--;
	}
	width = x;
	if (width >= 2)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	widthy(int x, int y)
{
	int		width;
	int		height;

	width = x - 2;
	height = y - 2;
	while (height >= 1)
	{
		ft_putchar('B');
		while (width >= 1)
		{
			ft_putchar(' ');
			width--;
		}
		height--;
		width = x - 2;
		if (width >= 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
	}
}

void	lastline(int x, int y)
{
	int		height;
	int		width;

	height = y;
	width = x - 2;
	if (height > 1)
	{
		ft_putchar('C');
		while (width >= 1)
		{
			ft_putchar('B');
			width--;
		}
		width = x;
		if (width >= 2)
		{
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	widthx(x);
	widthy(x, y);
	lastline(x, y);
}
