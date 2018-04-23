/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 14:00:16 by mabril            #+#    #+#             */
/*   Updated: 2018/04/16 14:00:19 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t len)
{
	unsigned char *cur;

	cur = (unsigned char *)str;
	if (len == 0)
		return (str);
	while (len--)
	{
		*cur = '\0';
		if (len)
			cur++;
	}
	return (str);
}
