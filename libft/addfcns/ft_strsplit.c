/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 11:32:26 by mabril            #+#    #+#             */
/*   Updated: 2018/05/04 11:32:28 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int			wordlen(const char *s, char c, int j)
{
	int	len;

	len = 0;
	while (*(s + j) == c)
		j++;
	while (*(s + j) != c && *(s + j) != '\0')
	{
		len++;
		j++;
	}
	return (len);
}

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**r;

	r = (char**)malloc(sizeof(*r) * (ft_wordcount(s, c) + 1));
	if(!s || !r)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_wordcount(s, c))
	{
		k = 0;
		r[i] = ft_strnew(wordlen(s, c, j) + 1)
		if (!r[i])
			r[i] = NULL;
		while (*(s + j) == c)
			j++;
		while (*(s + j) != c && *(s + j))
			*(r[i] + (k++)) = *(s + j);
		*(r[i] + k) = '\0';
	}
	r[i] = 0;
	return (r);
}
