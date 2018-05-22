/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 14:26:18 by mabril            #+#    #+#             */
/*   Updated: 2018/04/27 14:26:20 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trimlen(int start, int end)
{
	int i;

	i = 0;
	while (start != end)
	{
		i++;
		start++;
	}
	return (i);
}

static char	*cpy(char *dst, const char *src, int start, int end)
{
	while (src && start < end)
	{
		dst[start] = src[start];
		start++;
	}
	return (dst);
}

char		*ft_strtrim(char const *s)
{
	char	*r;
	int		start;
	int		end;
	int		i;

	i = 0;
	while (ft_isspace(*(s + i)))
		i++;
	start = i;
	while (*(s + i))
	{
		if (!ft_isspace(*(s + i)))
			end = i;
		i++;
	}
	r = (char *)malloc((trimlen(start, end) + 1) * sizeof(*r));
	cpy(r, s, start, end);
	return (r);
}
