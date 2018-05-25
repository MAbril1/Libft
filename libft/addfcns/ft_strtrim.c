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
#include <stdlib.h>

char		*ft_strtrim(const char *s)
{
	char	*r;
	int		i;
	int		j;
	int		k;

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
	r = (char *)malloc(((j - i) + 1) * sizeof(*r));
	k = -1;
	while (i < j)
		*(r + (++k)) =*(s + (i++)); 
	return (r);
}
