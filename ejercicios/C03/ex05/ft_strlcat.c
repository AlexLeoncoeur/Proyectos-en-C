/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:21:40 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/11 15:51:10 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = ft_strlen(dest);
	if (src[0] == '\0')
		return (dest_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (dest_len > size)
		return (ft_strlen(src) + size);
	else
		return (dest_len + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
	char dest2[20] = "Hello, ";
	char src2[] = "world!";
    unsigned int size = 8;

    printf("Before ft_strlcat: dest = \"%s\"\n", dest);
    printf("Result of ft_strlcat: %u\n", ft_strlcat(dest, src, size));
    printf("After ft_strlcat: dest = \"%s\"\n", dest);
	printf("Before strlcat: dest = \"%s\"\n", dest2);
   	printf("%lu\n", strlcat(dest2, src2, size));
    printf("After strlcat: dest = \"%s\"\n", dest2);

    return (0);
}*/
