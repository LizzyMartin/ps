/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relizabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 09:58:34 by relizabe          #+#    #+#             */
/*   Updated: 2020/02/11 12:41:47 by relizabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*aux;
	const unsigned char	*aux1;

	aux = (unsigned char *)dst;
	aux1 = (unsigned char *)src;
	i = 0;
	if (aux == aux1)
		return (aux);
	if (aux1 < aux)
	{
		while (++i <= len)
			aux[len - i] = aux1[len - i];
	}
	else
		while (len-- > 0)
			*(aux++) = *(aux1++);
	return (dst);
}
