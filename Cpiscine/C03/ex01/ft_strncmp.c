/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:05:15 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/11 16:07:29 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	else
	{
		i = 0;
		while ((s1[i] == s2[i]) && (i < n - 1)
			&& (s1[i] != '\0' && s2[i] != '\0'))
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s1[20] = "holame";
	char s2[] = "holamellamopipo";
	char s3[20] = "holame";
	char s4[] = "holamellamopipo";	
	unsigned int	n = 20;

	printf("%u\n",ft_strncmp(s1, s2, n));
	printf("%u\n",strncmp(s3, s4, n));
}*/
