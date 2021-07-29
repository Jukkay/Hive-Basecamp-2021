/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_input_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 07:11:46 by hmaronen          #+#    #+#             */
/*   Updated: 2021/07/18 07:42:25 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

char	**wrong_input_checker(int argc, char **argv)
{
	int x_i;
	int y_i;
	int counter;
	counter = 1;
	x_i = 0;
	y_i = 1;

	if (argc != 10)
{
	ft_putstr("Väärä määrä stringejä!\n");
	return (0);
}
while (argc > counter)
{
	while (argv[y_i][x_i] != '\0')
	{
		if (argv[y_i][x_i] < 46 || argv[y_i][x_i] > 58 ||
			argv[y_i][x_i] == 47)
		{
			ft_putstr("Stringeissä vääriä merkkejä!\n");
			return (0);
		}
		else
			x_i++;
	}
	if (x_i != 9)
	{
		ft_putstr("Stringien merkki määrä liian paljon tai liian vähän!\n");
		return (0);
	}
	y_i++;
	counter++;
	x_i = 0;
}
return (0);
}