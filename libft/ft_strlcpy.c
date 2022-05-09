/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:14:38 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 03:10:21 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	aux;
	size_t	len;

	len = 0;
	if (!dst)
		return (0);
	while (src[len])
		len++;
	if (!destsize)
		return (len);
	aux = 0;
	while (src[aux] && aux < destsize - 1)
	{
		dst[aux] = src[aux];
		aux++;
	}
	dst[aux] = '\0';
	return (len);
}
