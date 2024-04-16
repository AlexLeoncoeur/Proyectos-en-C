/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarenas- <aarenas-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:22:56 by aarenas-          #+#    #+#             */
/*   Updated: 2024/04/16 19:53:42 by aarenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list	*new)
{
	t_list	*aux;

	if (*lst == NULL)
		*lst = new;
	else
	{
		aux = ft_lstlast(lst);
		aux->next = new;
	}
}
