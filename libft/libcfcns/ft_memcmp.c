/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 17:05:02 by mabril            #+#    #+#             */
/*   Updated: 2018/04/24 17:06:06 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;
	int				i;

	i = -1;
	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	while (++i < (int)n)
	{
		if (*(one + i) != *(two + i))
			return (*(one + i) - *(two + i));
	}
	return (0);
}
