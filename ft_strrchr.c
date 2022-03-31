/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:05:41 by habovyan          #+#    #+#             */
/*   Updated: 2022/03/24 17:54:41 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			s_len;
	const char	*pseudo_s;

	s_len = ft_strlen(s);
	pseudo_s = s;
	s = s + s_len;
	while (*s != *pseudo_s && c != *s)
		s--;
	if (c == *s)
		return ((char *) s);
	return (0);
}
