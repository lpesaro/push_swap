/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlofrano <vlofrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 01:59:46 by vlofrano          #+#    #+#             */
/*   Updated: 2023/01/23 17:45:08 by vlofrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	if (!num)
		return (0);
	while (*ptr1 && *ptr2 && *ptr1 == *ptr2 && num > 0)
	{
		ptr1++;
		ptr2++;
		num--;
	}
	if (num > 0)
		return (*ptr1 - *ptr2);
	return (0);
}
