/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:34:42 by aarenas-          #+#    #+#             */
/*   Updated: 2024/04/09 09:57:34 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != '0')
	{
		ft_memset(s, '\0', n);
	}
}

/* #include <stdio.h>

int	main(void)
{
	char	str[30] = "pipo es un buen perro";

	ft_bzero(str, 4);
	printf("%s", str);
	printf("hello world");
	return (0);
} */
