/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlofrano <vlofrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:10:20 by vlofrano          #+#    #+#             */
/*   Updated: 2023/01/30 18:23:30 by vlofrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*src;

	i = 0;
	if (!s)
		return (NULL);
	src = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!src)
		return (NULL);
	while (s[i])
	{
		src[i] = f(i, s[i]);
		i++;
	}
	src[i] = 0;
	return (src);
}
