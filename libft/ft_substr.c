/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:24:35 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 03:12:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			index;
	unsigned int	count;
	char			*aux;
	char			*resp;

	aux = (char *)s;
	count = 0;
	index = 0;
	resp = malloc(sizeof(char) * len + 1);
	if (!s || !resp)
		return (NULL);
	while (aux[count] && count < start)
		count++;
	while (aux[count] && index < len)
	{
		resp[index] = aux[count];
		index++;
		count++;
	}
	resp[index] = '\0';
	return (resp);
}
