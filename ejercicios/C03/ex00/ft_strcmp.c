/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:03:26 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/11 16:09:19 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	if (s1[0] == '\0' && s2[0] == '\0')
		return (0);
	else
	{
		i = 0;
		while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
}
