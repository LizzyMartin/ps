/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relizabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:22:00 by relizabe          #+#    #+#             */
/*   Updated: 2020/02/11 12:52:09 by relizabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		atual;
	char	*last;

	i = 0;
	last = NULL;
	while (1)
	{
		atual = s[i];
		if (atual == c)
			last = (char *)(s + i);
		if (atual == '\0')
			break ;
		i++;
	}
	return (last);
}
