/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 06:43:44 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/22 19:42:34 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char **argv)
{
	int	error;

	if (ft_input_check(argc))
		return (0);
	error = ft_display_file(argv);
	if (error != 0)
	{
		ft_putnbr(error);
		write(1, "\n", 1);
	}
	return (0);
}
