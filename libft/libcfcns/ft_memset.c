/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 13:34:13 by mabril            #+#    #+#             */
/*   Updated: 2018/04/16 13:34:14 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char *cur;

	cur = (unsigned char *)str;
	if (len == 0)
		return (str);
	while (len--)
	{
		*cur = (unsigned char)c;
		if (len)
			cur++;
	}
	return (str);
}
