/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:18:12 by habovyan          #+#    #+#             */
/*   Updated: 2022/03/31 16:57:15 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		s1_len;
	int		s2_len;
	int		i;
	int 	j;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	j = 0;
	res = (char *)malloc((s1_len + s2_len) * sizeof(char));
	if (res == NULL)
		return (NULL);
	
	while (s1[j] != '\0')
	{
		res[j] = s1[j];
		j++;
	}
	while (s2[i] != '\0')
	{
		res[j] = s2[i];
		i++;
		j++;
	}
	return (res);
}
