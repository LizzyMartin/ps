/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relizabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:08:13 by relizabe          #+#    #+#             */
/*   Updated: 2020/02/11 12:38:54 by relizabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*aux;
	unsigned char	*aux2;

	aux = (unsigned char *)dst;
	aux2 = (unsigned char *)src;
	index = 0;
	while (index < n--)
	{
		*aux++ = *aux2++;
		if (*(aux - 1) == (unsigned char)c)
			return (aux);
	}
	return (NULL);
}
