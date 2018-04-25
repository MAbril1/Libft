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
	const char	*one;
	const char	*two;

	one = *s1;
	two = *s2;
	while ((int)n-- >= 0)
	{
		if (*one != *two)
			return ((unsigned char)(one - two));
		*one++;
		*two++;
	}
	return (0);
}
