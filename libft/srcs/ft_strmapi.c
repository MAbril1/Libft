/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 13:37:41 by mabril            #+#    #+#             */
/*   Updated: 2018/04/27 13:37:43 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	r = (char *)malloc((ft_strlen(s) + 1) * sizeof(*r));
	if (r)
	{
		i = -1;
		while (s[++i])
			r[i] = f(i, s[i]);
		r[i] = '\0';
	}
	return (r);
}
