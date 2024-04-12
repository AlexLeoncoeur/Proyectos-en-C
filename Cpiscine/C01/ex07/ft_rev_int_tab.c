/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:21:33 by aarenas-          #+#    #+#             */
/*   Updated: 2024/03/04 15:22:15 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	change;
	int	i;

	i = 0;
	while (i <= (size - 1))
	{
		change = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = change;
		i++;
		size--;
	}
}
