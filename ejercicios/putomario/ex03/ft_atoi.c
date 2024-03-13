/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:20:09 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/11 18:20:22 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ignorespace(char *c)
{
	if (*c == ' ' || *c == '\t' || *c == '\n'
		|| *c == '\v' || *c == '\f' || *c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (ignorespace(&str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = " ---+--+1234ab567";
	int	value;

	value = ft_atoi(str);
	printf("%d", value);
	return (0);
}*/
