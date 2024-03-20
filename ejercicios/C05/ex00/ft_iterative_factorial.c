/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:53:36 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/14 10:53:58 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (i > 0)
		{
			nb *= i;
			i--;
		}
		return (nb);
	}
}
/*
#include <stdio.h>

int	main()
{
	int nb;
	nb = 6;
	ft_iterative_factorial(nb);
	printf("%d", ft_iterative_factorial(nb));
	
}*/
