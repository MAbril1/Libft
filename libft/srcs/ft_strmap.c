/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 13:38:14 by mabril            #+#    #+#             */
/*   Updated: 2018/04/27 13:38:16 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
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
			r[i] = f(s[i]);
		r[i] = '\0';
	}
	return (r);
}
