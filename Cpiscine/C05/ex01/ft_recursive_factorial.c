/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:54:20 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/14 16:59:33 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
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
