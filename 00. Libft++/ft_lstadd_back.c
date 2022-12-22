/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:43:18 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/03/18 19:00:17 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	aux = *lst;
	if (!aux)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(aux);
	aux->next = new;
}
