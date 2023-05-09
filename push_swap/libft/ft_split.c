/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlofrano <vlofrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:57:30 by vlofrano          #+#    #+#             */
/*   Updated: 2023/01/28 21:33:33 by vlofrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_world(char const *s, char const d)
{
	size_t	word;
	int		i;

	word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == d)
			i++;
		if (s[i] != '\0')
			word++;
		while (s[i] != d && s[i] != '\0')
			i++;
	}
	return (word);
}

char	*ft_string(char const *s, char const c, int index)
{
	int		i;
	int		j;
	char	*d;

	i = index;
	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		j++;
	}
	d = malloc((sizeof(char) * j) + 1);
	i = index;
	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		d[j] = s[i];
		i++;
		j++;
	}
	d[j] = '\0';
	return (d);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**d;
	int		world;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	world = ft_world(s, c);
	d = (char **)malloc(sizeof(char *) * (world + 1));
	if (!d)
		return (NULL);
	while (i < world)
	{
		while (s[j] == c)
			j++;
		d[i] = ft_string(s, c, j);
		j = j + ft_strlen(d[i]);
		i++;
	}
	d[i] = 0;
	return (d);
}
