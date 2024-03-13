int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb = -2;
	int	power = 16;
	printf("%d" ,ft_iterative_power(nb, power));
}*/
