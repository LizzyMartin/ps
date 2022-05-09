/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 11:39:27 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 03:02:51 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	m;
	unsigned int	n;

	m = 0;
	while (dest[m])
		m++;
	n = 0;
	while (src[n])
	{
		dest[m + n] = src[n];
		n++;
	}
	dest[m + n] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = malloc(sizeof(char) * \
					(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s1 || !s2 || !s3)
		return (NULL);
	s3 = ft_strcpy((char *)s3, (char *)s1);
	s3 = ft_strcat((char *)s3, (char *)s2);
	return (s3);
}
