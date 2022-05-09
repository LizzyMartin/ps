/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 10:17:28 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 03:12:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *str)
{
	int	words;

	words = 0;
	while (*str != '\0')
	{
		while (*str == ' ')
			str++;
		if (*str != ' ' && *str != '\0')
			words++;
		while (*str != ' ' && *str != '\0')
			str++;
	}
	return (words);
}

int	count_breaks(char const *s2, char c, int i)
{
	int	count;

	count = 0;
	while (s2[i] != c && s2[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**free_all(char const **dest, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dest[j]);
	}
	free(dest);
	return (NULL);
}

char	**create(char const *s, char **dest, char c, int l)
{
	int	j;
	int	i;
	int	k;

	j = 0;
	i = 0;
	while (s[i] && j < l)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dest[j] = (char *)malloc(sizeof(char) * count_breaks(s, c, i) + 1);
		if (dest[j] == NULL)
			return (free_all((char const **)dest, j));
		while (s[i] && s[i] != c)
			dest[j][k++] = s[i++];
		dest[j][k] = '\0';
		j++;
	}
	dest[j] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		l;

	if (s == NULL)
		return (NULL);
	l = count_words(s);
	dest = (char **)malloc(sizeof(char *) * (l + 1));
	if (!dest)
		return (NULL);
	create(s, dest, c, l);
	return (dest);
}
