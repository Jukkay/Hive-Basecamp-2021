/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:10:52 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/14 11:17:32 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *src;
	char a[] = "TestString";
	
	src = a;
	printf("Source: %s\n", a);
	printf("Duplicate: %s\n", ft_strdup(src));
}