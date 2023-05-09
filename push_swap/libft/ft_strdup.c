/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlofrano <vlofrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:14:02 by vlofrano          #+#    #+#             */
/*   Updated: 2023/01/28 15:13:59 by vlofrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	size_t	size;
	char	*str2;
	int		i;

	size = (size_t)ft_strlen(str1) + 1;
	str2 = ft_calloc(size, sizeof(char));
	if (!str2)
		return (NULL);
	i = 0;
	while (i <= (int)size && str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	return (str2);
}
