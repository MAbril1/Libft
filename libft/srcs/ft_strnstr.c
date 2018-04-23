/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 18:26:45 by mabril            #+#    #+#             */
/*   Updated: 2018/04/18 18:26:46 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (haystack[i] != '\0' && i * sizeof(int) <= len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[k] == needle[j] && *haystack && *needle)
			{
				j++;
				k++;
			}
			if (needle == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
