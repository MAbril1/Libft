/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 18:26:45 by mabril            #+#    #+#             */
/*   Updated: 2018/04/18 18:26:46 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		needlelen;

	if (*needle == '\0')
		return ((char *)haystack);
	needlelen = ft_strlen(needle);
	i = -1;
	while (*(haystack + (++i)) && (int)(len--) >= needlelen)
	{
		if (*(haystack + i) == *needle
			&& ft_memcmp((haystack + i), needle, needlelen) == 0)
			return ((char *)(haystack + i));
	}
	return (NULL);
}
