/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:31:34 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/01 09:49:33 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_character(char x)
{
	write(1, &x, 1);
}

void	print_combination(char x, char y, char z)
{
	print_character(x + '0');
	print_character(y + '0');
	print_character(z + '0');
	if (x == 7 && y == 8 && z == 9)
	{
		return ;
	}
	print_character(',');
	print_character(' ');
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				print_combination(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
