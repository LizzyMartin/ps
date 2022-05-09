/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:02:25 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 03:06:09 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*aux;
	unsigned char	*aux2;

	aux = (unsigned char *)dst;
	aux2 = (unsigned char *)src;
	if (aux == NULL && aux2 == NULL)
		return (NULL);
	while (n--)
	{
		*aux = *aux2;
		aux++;
		aux2++;
	}
	return (dst);
}
