/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlofrano <vlofrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:25:14 by vlofrano          #+#    #+#             */
/*   Updated: 2023/01/28 17:56:43 by vlofrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;
	size_t	size1;
	size_t	size2;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2) + 1;
	join = (char *)malloc(sizeof(*s1) * (size1 + size2));
	if (join == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (size1 != 0)
		ft_strlcpy(join, s1, size1 + size2);
	ft_strlcpy(join + size1, s2, size1 + size2);
	return (join);
}
