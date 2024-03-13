int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb)
	{
		if (i * i == nb)
			return(i);
		i++;
	}
	return(0);
}

#include <stdio.h>

int	main(void)
{
	 int	nb = 24;
	 printf("%d", ft_sqrt(nb));
}
