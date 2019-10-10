/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:50:45 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/10 10:28:11 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*res;

	i = 0;
	while (i != start)
		i++;
	if (!(res = malloc(sizeof(*res) * len)))
		return (0);
	i = 0;
	while (i < len - 1)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
