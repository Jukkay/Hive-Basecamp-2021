/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:13:13 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/13 11:59:32 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int i, char **argv)
{
	char *string;

	i = 0;
	string = argv[0];
	while (string[i] != '\0')
	{
		ft_putchar(string[i]);
		i++;
	}
	ft_putchar('\n');
}
