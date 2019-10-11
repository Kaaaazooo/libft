/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:15:57 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/11 11:47:42 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char			**count_strs(const char *s, char c)
{
	unsigned int	i;
	unsigned int	count;
	char			**res;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] != c)
			i++;
		while (s[i] == c)
			i++;
		count++;
	}
	if (!(res = malloc(sizeof(char*) * (count + 1))))
		return (0);
	return (res);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**res;
	unsigned int	i;
	unsigned int	len;

	if (!s)
		return (0);
	res = count_strs(s, c);
	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c)
			s++;
		if (*s)
		{
			while (s[len] != c)
				len++;
			res[i] = ft_strndup(s, len);
			s += len;
			i++;
		}
	}
	res[i] = 0;
	return (res);
}
