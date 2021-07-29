/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:26:59 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/16 17:35:07 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// int		ft_strlen(char *str);
// char *split_str(char *str, int len);
// int ignore_breaks(int i, char *str, int len);
// int ignore_chars(int i, char *str);
int		count_words(char *str);

char **ft_split_whitespaces(char *str)
{
	int len;
	char *arr;
	char **ret;

	ret = &arr;	
	// len = ft_strlen(str);
	len = count_words(str);
	printf("split_whitespace len: %d", len);
	// arr = split_str(str, len);
	return(ret);
}

int		count_words(char *str)
{
	int word_count;

	word_count = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			word_count++;
		}
		i++;
	}
	word_count--;
	return (word_count);
}
// int		ft_strlen(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 		printf("strlen i: %d", i);
// 	}
// 	return (i);
// }

// char *split_str(char *str, int len)
// {
// 	int i2;
// 	int i;
// 	char *arr;
// 	printf("split_str len: %d", len);
// 	arr = (char *)malloc(len * sizeof(int) + 1);
// 	i2 = 0;
// 	i = 0;
// 	while (i <= len)
// 	{
// 		i = ignore_breaks(i, str, len);
// 		arr[i2] = str[i];
// 		printf("char: %c", arr[i2]);
// 		printf("address: %c", arr[i2]);
// 		i2++;
// 		i = ignore_chars(i, str);
// 		i++;		
// 	}	
// 	return(arr);
// }

// int ignore_breaks(int i, char *str, int len)
// {
// 	while (str[i] == ' ' || str[i] == '\\' || i <= len)
// 	{
// 		if (str[i] == '\\' && str[i +1] == 'n')
// 		{
// 			i += 2;
// 		}
// 		else if (str[i] == '\\' && str[i +1] == '0')
// 			return(0);
// 		else
// 			i++;
// 	}
// 	return(i);
// }

// int ignore_chars(int i, char *str)
// {
// 	while (str[i] != ' ' || str[i] != '\\')
// 			i++;
// 	return(i);
// }

int main(void)
{
	char *str = "aaa bbb ccc	ddd eee \n ttt\nsss";
	char *arr;
	char **ret;

	ret = &arr;
	ret = ft_split_whitespaces(str);
	return(0);
}