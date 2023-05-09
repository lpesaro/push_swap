/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlofrano <vlofrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 01:21:06 by vlofrano          #+#    #+#             */
/*   Updated: 2023/01/23 17:40:29 by vlofrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		if (*(unsigned char *)(str + i) == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return ((void *) NULL);
}
