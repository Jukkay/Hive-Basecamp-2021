/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 12:14:09 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/20 08:51:39 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_any(char **tab, int(*f)(char*));
int is_b(char *c);

int main(void)
{
	char *str[] = {"hello world", "s", "hed bull", "hs", 0};
	int i;
	int ret;

	i = 0;
	ret = ft_any(str, &is_b);
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
