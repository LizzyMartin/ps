/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:29:42 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 03:01:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len-- >= size)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, size) == 0)
			return ((char *)haystack);
		size = ft_strlen(needle);
		haystack++;
	}
	return (NULL);
}
