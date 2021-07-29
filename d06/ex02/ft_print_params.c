/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:56:14 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/13 13:56:17 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*string;
	int		i;
	int		i2;

	i2 = 1;
	while (i2 < argc)
	{
		i = 0;
		string = argv[i2];
		while (string[i] != '\0')
		{
			ft_putchar(string[i]);
			i++;
		}
		i2++;
		ft_putchar('\n');
	}
	return (0);
}
