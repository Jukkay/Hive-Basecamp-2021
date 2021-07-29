/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:27:47 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/15 17:52:12 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		argvlen(int argc, char **argv);
void	make_string(int argc, char **argv, char *str, int length);

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		length;

	length = argvlen(argc, argv);
	str = (char *)malloc(length * sizeof(char));
	make_string(argc, argv, str, length);
	str[length] = '\0';
	return (str);
}

int		ft_strlen(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

int		argvlen(int argc, char **argv)
{
	int i;
	int length;

	i = 1;
	length = 0;
	while (i < argc)
	{
		length += ft_strlen(argv[i]);
		i++;
	}
	length += 2 * (argc - 2);
	return (length);
}

void	make_string(int argc, char **argv, char *str, int length)
{
	char	*string;
	int		i;
	int		i2;
	int		i3;

	i = 1;
	i3 = 0;
	while (i3 < length && i <= argc)
	{
		i2 = 0;
		string = argv[i];
		while (string[i2] != '\0')
		{
			str[i3] = string[i2];
			i2++;
			i3++;
		}
		str[i3] = '\\';
		i3++;
		str[i3] = 'n';
		i3++;
		i++;
	}
}
