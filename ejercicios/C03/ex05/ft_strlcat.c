/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:21:40 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/20 15:54:49 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	a;

	a = 0;
	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[a] != '\0')
		a++;
	if (size <= i)
		a += size;
	else
		a += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (a);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char dest[20] = "hola";
    char src[] = "hola";
	char dest2[20] = "hola";
	char src2[] = "hola";
    unsigned int size = 8;

    printf("Before ft_strlcat: dest = \"%s\"\n", dest);
    printf("Result of ft_strlcat: %u\n", ft_strlcat(dest, src, size));
    printf("After ft_strlcat: dest = \"%s\"\n", dest);
	printf("Before strlcat: dest = \"%s\"\n", dest2);
   	printf("%lu\n", strlcat(dest2, src2, size));
    printf("After strlcat: dest = \"%s\"\n", dest2);

    return (0);
}
*/
