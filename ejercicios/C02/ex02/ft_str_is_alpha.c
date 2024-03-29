/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:41:54 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/06 19:25:57 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if ((str[i] < 65) || ((str[i] > 90)
					&& (str[i] < 97)) || (str[i] > 122))
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
}
