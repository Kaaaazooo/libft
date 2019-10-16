/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:50:45 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/16 16:10:47 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;

	i = 0;
	if (!s || !(str = malloc(sizeof(*str) * (len + 1))))
		return (0);
	str[len] = 0;
	if (ft_strlen(s) > (size_t)start)
	{
		while (i < len && s[(size_t)start + i])
		{
			str[i] = s[(size_t)start + i];
			i++;
		}
	}
	return (str);
}
