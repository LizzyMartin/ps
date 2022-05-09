/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relizabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 10:10:17 by relizabe          #+#    #+#             */
/*   Updated: 2020/01/29 10:13:41 by relizabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	*aux2;

	aux = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (aux[i] != aux2[i])
			return (aux[i] - aux2[i]);
		i++;
	}
	return (0);
}
