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

int			strcount(char const *str, char c)
{
	int i;
	int count;
	int nextword;

	i = 0;
	count = 0;
	nextword = 1;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			nextword = 1;
		else
		{
			if (nextword == 1)
				count++;
			nextword = 0;
		}
		i++;
	}
	return (count);
}

static int	charcount(char const *s, char c, int i)
{
	int count;

	count = 0;
	while (*s && s[i] != c)
	{
		count++;
		i++;
	}
}

char		**ft_strsplit(char const *s, char c)
{
	char	**r;
	int		i;

	i = -1;
	if ((r = malloc(sizeof(char*) * (strcount(s, c) + 1))) == NULL)
		return (NULL);
	while (s[++i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			k = 0;
			*r = (char *)malloc((charcount(s, c, i) + 1) * sizeof(*r));
			while (s[i++] != c)
			{
				*r = s[i];
				r++;
			}
			*r = '\0';
			*r++;
		}
	}
	**r = NULL;
	return (**r);
}
