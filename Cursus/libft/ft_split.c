/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:49:29 by aarenas-          #+#    #+#             */
/*   Updated: 2024/04/13 19:22:36 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcount(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	ft_modstrchr(const char *s, int c)
{
	unsigned char	aux;
	int				i;
	char			*tmp;

	aux = (char)c;
	i = 0;
	tmp = (char *)s;
	if (s[0] == c)
		i++;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == aux)
			return (i);
		i++;
	}
	if (aux == '\0' || c == 1024)
	{
		return (i);
	}
	else
		return (0);
}

static int	ft_separator(int i, int j)
{
	int	count;

	count = 0;
	while (i < j)
	{
		count++;
		i++;
	}
	return (count);
}

/* char	**ft_malloc(int *len, int ccount)
{
	char	**str;
	int		i;

	i = 0;
	**str = malloc(sizeof(char *) * (ccount + 1));
	while (i < ccount)
	{
		str[i] = malloc(sizeof(char) * len[i]);
		i++;
	}
	str[i] = '\0';
	return (**str);
} */

char	**ft_split(char const *s, char c)
{
	int		ccount;
	int		i;
	int		*pos;
	int		*len;
	char	**str;

	i = 0;
	ccount = ft_charcount(s, c);
	pos = malloc(sizeof(int) * (ccount + 1));
	len = malloc(sizeof(int) * (ccount + 1));
	while (i++ < ccount && s[i] != '\0')
		pos[i] = ft_modstrchr(&s[i], c);
	i = 0;
	while (i++ < ccount)
		len[i] = ft_separator(pos[i], pos[i + 1]);
	i = 0;
	str = malloc(sizeof(char *) * (ccount + 1));
	while (i++ < ccount)
		str[i] = ft_substr(s, pos[i], len[i]);
	*str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	int		i = 0;
	char	s[] = "pipo es un buen perro";
	char	c = ' ';
	char	**str = ft_split(s, c);

	while (str[i][0] != '\0')
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
}
