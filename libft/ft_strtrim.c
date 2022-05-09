/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 10:19:28 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 03:08:44 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_setischar(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

size_t	ft_findmax(const char *str, const char *set, size_t len, char step)
{
	size_t	max;
	size_t	i;

	max = 0;
	while (max < len)
	{
		i = max;
		if (step < 0)
			i = len - 1 - max;
		if (!ft_setischar(set, str[i]))
			return (i);
		max++;
	}
	return (max);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = ft_findmax(s1, set, len, 1);
	end = ft_findmax(s1, set, len, -1);
	if (start > end)
		len = 0;
	else
		len = end - start + 1;
	if (len <= 0)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + start, len);
	str[len] = '\0';
	return (str);
}
