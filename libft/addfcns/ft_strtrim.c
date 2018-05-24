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
	int i;

	i = 0;
	while (src[start] && start < end)
	{
		dst[i] = src[start];
		start++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char		*ft_strtrim(char const *s)
{
	char	*r;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_isspace(*(s + i)))
		i++;
	j = ft_strlen(s);
	while (ft_isspace(*(s + j)))
		j--;
	if (i == 0 || j == ft_strlen(s))
		return ((char *)s);
	r = (char *)malloc((trimlen(i, j) + 1) * sizeof(*r));
	cpy(r, s, i, j);
	return (r);
}
