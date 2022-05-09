/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:18:00 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 03:00:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s1, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (s1[i] == '\0')
			return (i);
		i++;
	}
	return (size);
}

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	si;
	size_t	di;
	size_t	slen;
	size_t	dlen;

	dlen = ft_strnlen(s1, size);
	slen = ft_strlen(s2);
	if (dlen < size)
	{
		si = 0;
		di = dlen;
		while (di < size && si < slen)
			s1[di++] = s2[si++];
		if (di < size)
			s1[di] = '\0';
		else
			s1[size - 1] = '\0';
	}
	return (dlen + slen);
}
