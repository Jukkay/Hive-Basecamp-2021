/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 09:00:51 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/20 10:10:30 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int comp;

	i = 0;
	comp = 0;
	length = 0;
	if ((*f)(tab[i], tab[i + 1]) < 0)
	
	else if ((*f)(tab[i], tab[i + 1]) < 0 && (*f)(tab[i + 1], tab[i + 2]) < 0)
	
	while (*tab)
	{
		i += (*f)(tab[i], tab[i + 1]);
		(*f)(*tab, *tab + 1) <= 0 
		tab++;
		if (!(i <= comp))
			return (0);
	}
	return (1);
}