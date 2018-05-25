
#include "libft"

int			ft_wordcount(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		while (*(s + i) == c)
			i++;
		if (*(s + i) != c && *(s + i) != '\0')
			count++;
		while (*(s + i) != c && *(s + i) != '\0')
			i++;
	}
	return (count);
}