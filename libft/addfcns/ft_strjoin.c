/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 14:12:24 by mabril            #+#    #+#             */
/*   Updated: 2018/04/27 14:12:27 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int			len;
	char		*r;

	len = ft_strlen(s1) + ft_strlen(s2);
	r = (char *)malloc((len + 1) * sizeof(*r));
	while (*s1)
	{
		*r = *s1;
		r++;
		s1++;
	}
	while (*s2)
	{
		*r = *s2;
		r++;
		s2++;
	}
	*r = '\0';
	return (r);
}
