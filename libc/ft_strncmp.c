/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:23:34 by habovyan          #+#    #+#             */
/*   Updated: 2022/04/14 17:40:38 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		*smek;
	unsigned char		*serku;

	smek = (unsigned char *)s1;
	serku = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (smek[i] && serku[i] && n - 1 > i && smek[i] == serku[i])
		i++;
	return (smek[i] - serku[i]);
}
