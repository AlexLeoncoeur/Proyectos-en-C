typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char 	*copy;
}				t_stock_str;

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct t_stock_str *pipo;
	int	i;

	i = 0;
	while (i < ac)
	{
	pipo[i].size = ft_strlen(av[i]);
	pipo[i].copy = strcpy(pipo[i].str, av[i]);
	pipo[i].str = av[i];
	}

	return (pipo);
}
