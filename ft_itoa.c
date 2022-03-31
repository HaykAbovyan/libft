/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habovyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:06:36 by habovyan          #+#    #+#             */
/*   Updated: 2022/03/31 20:08:22 by habovyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_int_min(int n, char *res)
{
	res[1] = '2';
	n = -147483648;
	return (n);
}

int	ft_len(int n)
{
	int	l;

	l = 0;
	if (n < 0)
		l++;
	while (n != 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = ft_len (n);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		if (n == -2147483648)
			n = ft_int_min(n, res);
		res[0] = '-';
		n = n * -1;
	}
	res[len] = '\0';
	while (n != 0)
	{
		res[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (res);
}
