/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:50:36 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/14 11:09:57 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	size_t	srclen;
	char	*dest;
	int		i;
	int		n;

	srclen = ft_strlen(src);
	dest = (char *)malloc(srclen + 1);
	if (dest == 0)
		return (0);
	i = 0;
	n = (size_t)srclen;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
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
