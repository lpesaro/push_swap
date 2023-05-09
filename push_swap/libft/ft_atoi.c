/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlofrano <vlofrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 00:54:30 by vlofrano          #+#    #+#             */
/*   Updated: 2023/01/21 02:34:57 by vlofrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char a)
{
	if (a == '\t' || a == '\n' || a == '\r' || a == '\f' || a == '\v'
		|| a == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	res;
	int	sign;

	sign = 1;
	i = 0;
	res = 0;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while (s[i] != '\0' && s[i] >= 48 && s[i] <= 57 && ft_isspace(s[i]) == 0)
	{
		res = (res * 10) + (s[i] - 48);
		i++;
	}
	return (res * sign);
}
