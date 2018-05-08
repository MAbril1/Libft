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

static int	strcount(const char *str, char c)
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

static int	charcount(const char *s, char c, int i)
{
	int count;

	count = 0;
	while (*s && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char		**ft_strsplit(const char *s, char c)
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
			*r = (char *)malloc((charcount(s, c, i) + 1) * sizeof(*r));
			while (s[i] != c && s[i] != '\0')
			{
				**r = s[i];
				(*r)++;
				i++;
			}
			**r = '\0';
			(*r)++;
		}
	}
	*r = NULL;
	return (r);
}
