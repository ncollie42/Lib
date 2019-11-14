#include "nc_lib.h"

static int	ft_word_count(char const *str, char del)
{
	int	i;
	int	count;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != del)
		{
			count++;
			while (str[i] && (str[i] != del))
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_word_length(char const *str, char del, int i)
{
	int	j;

	j = i;
	while (str[j] && (str[j] != del))
		j++;
	return (j - i);
}

char		**nc_strsplit(char const *s, char c)
{
	int		i;
	int		index;
	int		length;
	char	**result;

	i = 0;
	index = 0;
	if (!s || !(result = (char **)malloc(sizeof(char *) *
					(ft_word_count(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			length = ft_word_length(s, c, i);
			if (!(result[index] = nc_strndup(s + i, length)))
				return (NULL);
			index++;
			i += length;
		}
		else
			i++;
	}
	result[index] = NULL;
	return (result);
}