/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 08:45:31 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/14 15:48:05 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long		res;
	long long		max;
	int				sign;
	int				i;

	res = 0;
	max = 922337203685477580;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res > max || (res >= max && sign > 0 && str[i] > '7') ||
		(res >= max && sign < 0 && str[i] > '8'))
			return (sign > 0 ? -1 : 0);
		res = res * 10 + str[i++] - 48;
	}
	return ((int)(res * sign));
}
