/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:35:52 by relizabe          #+#    #+#             */
/*   Updated: 2022/05/09 15:48:19 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	total;
	int		sign;

	total = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || \
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while (*str >= '0' && *str <= '9')
	{
		total *= 10;
		total += *str - '0';
		str++;
	}
	if (total > 2147483647 || total < -2147483648)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	return (total * sign);
}
