/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:23:19 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/06 21:10:39 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap_arr(int *i, int *min)
{
	int	change;

	change = *i;
	*i = *min;
	*min = change;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	minindex;

	i = 0;
	while (i < size - 1)
	{
		minindex = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[minindex])
			{
				minindex = j;
			}
			j++;
			ft_swap_arr(&tab[i], &tab[minindex]);
		}
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	change;

	i = 0;
	while (i < (size -1))
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				change = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = change;
			}
			j++;
		}
		i++;
	}
}
