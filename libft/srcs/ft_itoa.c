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

static char	*conversion(int n, char *r)
{
	char *dst;

	dst = r;
	if (n < 0)
	{
		n *= -1;
		*dst++ = '-';
	}
	else if (n / 10 != 0)
		dst = conversion(n / 10, dst)
	*dst++ = (n % 10) + '0';
	*dst = '\0';
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*r;

	r = (char *)malloc((get_strlen(n) + 1) * sizeof(*r));
	return (conversion(n, *r));
}
