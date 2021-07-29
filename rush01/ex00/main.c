/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 06:44:16 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/17 06:45:50 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*sudoku(int argc, char **argv);

int	main(void)
{
	int argc;
	char *arr;
	char **argv;

	argv = &arr;
	
	arr = sudoku(argc, argv);
	
	return(0);
}
