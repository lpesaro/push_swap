/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlofrano <vlofrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:37:40 by vlofrano          #+#    #+#             */
/*   Updated: 2023/02/01 18:39:45 by vlofrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t dim)
{
	size_t	i;
	void	*s;
	int		a;

	a = count * dim;
	if (dim != 0 && a / dim != count)
		return (NULL);
	s = malloc(dim * count);
	if (!s)
		return (NULL);
	i = 0;
	ft_bzero(s, dim * count);
	return (s);
}
