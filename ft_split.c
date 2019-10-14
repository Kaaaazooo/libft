/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:15:57 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/14 15:35:50 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t		count_strs(const char *s, char c)
{
	size_t			i;
	size_t			count;

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
	return (count);
}

static void			free_strs(char **res, size_t len)
{
	size_t			i;

	i = 0;
	while (i <= len)
	{
		free(res[i]);
		i++;
	}
}

static char			**ft_assign(char const *s, char **res, char c)
{
	unsigned int	i;
	unsigned int	len;

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
			if (!(res[i] = ft_strndup(s, len)))
			{
				free_strs(res, i);
				return (0);
			}
			s += len;
			i++;
		}
	}
	res[i] = 0;
	return (res);
}

char				**ft_split(char const *s, char c)
{
	char			**res;

	if (!s || !(res = malloc(sizeof(char*) * (count_strs(s, c) + 1))))
		return (0);
	return (res = ft_assign(s, res, c));
}
