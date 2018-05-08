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

	i = (int)len;
	if (!s[start] || !s[start + i] || !s)
		return (NULL);
	r = (char *)malloc((ft_strlen(s) + 1) * sizeof(*r));
	while (*s && i-- > 0)
	{
		*r = s[start];
		r++;
		start++;
	}
	*r = '\0';
	return (r);
}
