/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:30:10 by habovyan          #+#    #+#             */
/*   Updated: 2022/03/29 19:38:30 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*s11;
	unsigned const char	*s21;

	s11 = (unsigned char *)s1;
	s21 = (unsigned const char *)s2;
	i = 0;
	while (i < n)
	{
		if (s11[i] != s21[i])
			return (s11[i] - s21[i]);
		i++;
	}
	return (0);
}
