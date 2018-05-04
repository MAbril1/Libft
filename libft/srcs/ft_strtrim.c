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

static int	trimlen(char *str, int start, int end)
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
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\v'
			|| s[i] == '\f' || s[i] == '\r' || s[i] == ' ')
		i++;
	start = i;
	while (s[i])
	{
		if (!(s[i] == '\t' || s[i] == '\n' || s[i] == '\v'
			|| s[i] == '\f' || s[i] == '\r' || s[i] == ' '))
			end = i;
		i++;
	}
	r = (char *)malloc((trimlen(s) + 1) * sizeof(*r));
	cpy(*r, *s, start, end);
	return (r);
}
