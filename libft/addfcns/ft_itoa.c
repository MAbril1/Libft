/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 14:21:21 by mabril            #+#    #+#             */
/*   Updated: 2018/05/04 14:21:22 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_strlen(int n)
{
	int	i;

	i = 0;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*r;
	int		strlen;
	int		sign;

	strlen = get_strlen(n);
	sign = 1;	
	if (n < 0)
	{
		sign = -1;
		strlen++;
	}
	r = ft_strnew(strlen);
	if (!r)
		return (NULL);
	*(r + (--strlen)) = n % 10 + '0';
	while (n /= 10)
		*(r + (--strlen)) = n % 10 + '0';
	if (sign == -1)
		*(r + 0) = '-';
	return (r);
}
