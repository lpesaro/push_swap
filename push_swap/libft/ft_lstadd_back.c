/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlofrano <vlofrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:59:54 by vlofrano          #+#    #+#             */
/*   Updated: 2023/01/30 22:07:08 by vlofrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*dep;

	if (!lst)
		return ;
	if (*lst)
	{
		dep = ft_lstlast(*lst);
		dep->next = new;
	}
	else
		*lst = new;
}
