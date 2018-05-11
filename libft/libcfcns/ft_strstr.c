/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 18:11:52 by mabril            #+#    #+#             */
/*   Updated: 2018/04/18 18:11:55 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = -1;
	while (*(haystack + (++i)))
	{
		j = 0;
		while (*(needle + j) == *(haystack + (i + j)))
		{
			if (*(needle + (j + 1)) == '\0')
				return ((char *)haystack + i);
			j++;
		}
	}
	return (NULL);
}
