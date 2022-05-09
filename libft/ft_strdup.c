/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:58:42 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 03:03:44 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*aux;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (s1[size])
		size++;
	aux = malloc(sizeof(const char) * (size + 1));
	if (!aux)
		return (NULL);
	while (s1[i])
	{
		aux[i] = s1[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
