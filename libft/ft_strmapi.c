/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 11:37:18 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 02:57:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[len])
		len++;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, *s++);
		i++;
	}
	str[i] = '\0';
	return (str);
}
