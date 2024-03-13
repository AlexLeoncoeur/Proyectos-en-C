int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}

#include <stdio.h>

int	main(void)
{
	int index = 5;
	printf("%d", ft_fibonacci(index));
}
