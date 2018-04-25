/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 16:12:27 by mabril            #+#    #+#             */
/*   Updated: 2018/04/24 16:12:28 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	const char *src;

	src = *s;
	while ((int)n-- >= 0)
	{
		if (*src == (unsigned char)c)
			return (src);
		*src++;
	}
	return (NULL);
}
