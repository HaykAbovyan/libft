/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:53:07 by habovyan          #+#    #+#             */
/*   Updated: 2022/03/24 17:57:01 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nee_size;

	nee_size = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)&haystack[0]);
	i = 0;
	while (i < len && i < len - nee_size)
	{
		j = -1;
		while (++j < nee_size)
		{
			if (haystack[j + i] != needle[j])
				break ;
		}
		if (j == nee_size)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}	
