int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb - 1;
	while (i > 0)
	{
		nb *= i;
		ft_recursive_factorial(i--);
	}
	return (nb);
}
/*
#include <stdio.h>

int	main()
{
	int nb;
	nb = 6;
	ft_recursive_factorial(nb);
	printf("%d", ft_recursive_factorial(nb));

}*/
