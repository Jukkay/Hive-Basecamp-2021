/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 12:14:09 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/21 08:32:19 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int nb);

int main(void)
{
	int tab[10];
	int i;
	int length;

	i = 0;
	length = 10;
	while (i <= length)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, 0, &ft_putnbr);
	return(0);
}
