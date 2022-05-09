/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relizabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:33:12 by relizabe          #+#    #+#             */
/*   Updated: 2020/01/29 10:15:29 by relizabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				aux;
	const unsigned char	*s3;
	const unsigned char	*s4;

	aux = 0;
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while (s3[aux] && s4[aux] && aux < n)
	{
		if (s3[aux] != s4[aux])
			return (s3[aux] - s4[aux]);
		aux++;
	}
	if (s3[aux] != s4[aux] && aux != n)
		return (s3[aux] - s4[aux]);
	return (0);
}
