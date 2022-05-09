/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relizabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 10:00:07 by relizabe          #+#    #+#             */
/*   Updated: 2020/02/11 12:39:26 by relizabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	goal;

	i = 0;
	aux = (unsigned char *)s;
	goal = (unsigned char)c;
	while (i < n)
	{
		if (aux[i] == goal)
			return (aux + i);
		i++;
	}
	return (NULL);
}
