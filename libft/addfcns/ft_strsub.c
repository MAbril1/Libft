/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 14:04:17 by mabril            #+#    #+#             */
/*   Updated: 2018/04/27 14:12:19 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	int			i;
	char		*r;

	if (!s)
		return (NULL);
	r = ft_strnew(len);
	if (!r)
		return (NULL);
	i = 0;
	while (i < (int)len)
		*(r + (i++)) = *(s + (start++));
	*(r + i) = '\0';
	return (r);
}
