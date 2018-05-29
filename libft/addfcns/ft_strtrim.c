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
	int		len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (ft_isspace(*(s + (len - 1))))
		len--;
	i = -1;
	while (ft_isspace(*(s + ++i)))
		len--;
	if (len <= 0)
		len = 0;
	r = (char *)malloc((len + 1) * sizeof(char));
	if (r == NULL)
		return (NULL);
	j = -1;
	while (len--)
		*(r + ++j) = *(s + (i++));
	*(r + ++j) = '\0';
	return (r);
}
