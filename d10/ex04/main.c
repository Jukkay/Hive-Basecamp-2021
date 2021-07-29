/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 08:47:05 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/20 08:54:42 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int(*f)(char*));

#include <stdio.h>
#include <stdlib.h>

int ft_count_if(char **tab, int(*f)(char*));
int is_b(char *c);

int main(void)
{
	char *str[] = {"hello world", "s", "red bull", "hs", 0};
	int i;
	int ret;

	i = 0;
	ret = ft_count_if(str, &is_b);
	printf("returned %d\n", ret);
	return(0);
}

int is_b(char *c)
{
	if (*c == 'h')
		return (1);
	else
		return (0);
}
