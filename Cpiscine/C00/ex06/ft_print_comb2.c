/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:15:08 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/01 09:54:13 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_character(char c)
{
	write (1, &c, 1);
}

void	print_combination(int i)
{
	int	tens;
	int	units;

	if (i < 10)
	{
		print_character('0');
		print_character(i + '0');
	}
	else
	{
		tens = i / 10;
		units = i % 10;
		print_character(tens + '0');
		print_character(units + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_combination(i);
			print_character(' ');
			print_combination(j);
			if (i < 98)
			{
				print_character(',');
				print_character(' ');
			}
			j++;
		}
		i++;
	}
}
