/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:33:01 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/13 13:50:03 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*string;
	int		i;

	argc--;
	while (argc > 0)
	{
		i = 0;
		string = argv[argc];
		while (string[i] != '\0')
		{
			ft_putchar(string[i]);
			i++;
		}
		argc--;
		ft_putchar('\n');
	}
	return (0);
}
