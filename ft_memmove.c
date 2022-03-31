/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:36:45 by habovyan          #+#    #+#             */
/*   Updated: 2022/03/25 19:26:07 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src <= dst)
	{
		i = len - 1;
		while ((int)(len) > 0)
		{
			*(char *)(dst + i) = *(const char *)(src + i);
			i--;
			len--;
		}
		return (dst);
	}
	while (len > 0)
	{
		*(char *)(dst + i) = *(const char *)(src + i);
		i++;
		len--;
	}
	return (dst);
}
