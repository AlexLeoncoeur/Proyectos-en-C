/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:28:47 by aarenas-          #+#    #+#             */
/*   Updated: 2024/04/22 18:26:30 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static size_t	ft_find_n(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	aux = malloc(sizeof(char) * len + 1);
	if (aux == NULL)
		return (0);
	while (i < len)
	{
		aux[i] = s[start + i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

static char	*ft_join(int i, char *c, char *str, char *tmp)
{
	tmp = str;
	c[i] = '\0';
	str = ft_strjoin(tmp, c);
	free(tmp);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*next_line = NULL;
	char		*c;
	char		*tmp;
	char		*str;
	int			i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp = NULL;
	c = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	str = next_line;
	while (ft_is_in_str(c, '\n') == 0 || ft_is_in_str(c, '\0') == 0)
	{
		i = read(fd, c, BUFFER_SIZE);
		if (i < 0 && c)
			return (free(c), str);
		if (i == 0 && str)
			return (str);
		else if (i <= 0)
			return (free(c), NULL);
		str = ft_join(i, c, str, tmp);
	}
	i = ft_strlen(ft_strchr(str, '\n'));
	next_line = ft_substr(str, ft_find_n(str) + 1, i);
	tmp = ft_strchr(str, '\n') + 1;
	*tmp = '\0';
	return (free(c), str);
}

/* void	leaks(void)
{
	system("leaks -q a.out");
} */

/* read devuelve el numero de caracteres que ha leido y los guarda en *c. */

/* int main(int ac, char **av)
{
	char	*str;

	if (ac != 2)
		return 0;
	int fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return 0;
	for(int i = 0; i < 5; i++)
	{
		str = get_next_line(fd);
		printf("%s", str);
		free(str);
	}
	atexit(leaks);
	return (0);
} */
