/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:03:40 by habovyan          #+#    #+#             */
/*   Updated: 2022/04/22 17:00:08 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t	i;
	char	*ptr1;

	ptr1 = (char *)ptr;
	i = 0;
	while (i < n)
	{
		ptr1[i] = x;
		i++;
	}
	return (ptr1);
}
