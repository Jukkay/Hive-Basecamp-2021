/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:10:52 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/15 17:39:21 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int	main(void)
{
	int argc;
	char *arr;
	char **argv;

	argv = &arr;
	
	arr = ft_concat_params(argc, argv);

	
	//printf("Min: %d\n", min);
	//printf("Max: %d\n", max);
	//printf("Count: %d\n", count);
	
	// i = 0;
	//if (*(array + 1) == 0)
	//	printf("Array: %d\n", *(array + i));
	//else
	//{
	//	while (i <= count)
	//	{
	//		printf("Array: %d\n", *(array + i));
	//		i++;
	//	}
	//} 
	return(0);
}
