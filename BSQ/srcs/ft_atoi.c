/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumanner <jumanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:18:35 by jumanner          #+#    #+#             */
/*   Updated: 2021/07/26 16:10:28 by jumanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_digit(char c)
{
	int result;

	result = c - 48;
	if (result < 0 || result > 9)
		return (-1);
	else
		return (result);
}

void	add_digit(int digit, int *result, int *num_started)
{
	*result = *result * 10;
	*result += digit;
	*num_started = 1;
}

void	handle_sign_change(char c, int *sign, int *num_started)
{
	if (c == '-')
		*sign *= -1;
	*num_started = 1;
}

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v')
		return (1);
	if (c == '\r' || c == '\n' || c == '\f')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int result;
	int sign;
	int num_started;
	int i;

	sign = 1;
	result = 0;
	num_started = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((is_whitespace(str[i]) || get_digit(str[i]) == -1) && num_started)
			return (result * sign);
		if (get_digit(str[i]) > -1)
			add_digit(get_digit(str[i]), &result, &num_started);
		else if (!is_whitespace(str[i]))
		{
			if ((str[i] == '-' || str[i] == '+') && sign == 1)
				handle_sign_change(str[i], &sign, &num_started);
			else
				return (result * sign);
		}
		i++;
	}
	return (result * sign);
}
