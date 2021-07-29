/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:23:05 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/14 17:34:15 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_sort_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	int i;
	char *string1;
	char *string2;
	char *smallest;

	i = 0;
	while (argc > 0)
	{
		string1 = argv[argc - 1];
		string2 = argv[argc];
		if (string1[i] < string2[i])
			smallest = string1;
		i++;
	}
	i = 0;
	while (smallest[i] != '\0')
	{
		ft_putchar(smallest[i]);
		i++;
	}
	ft_putchar('\n');
}