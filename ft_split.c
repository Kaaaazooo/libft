/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:52:38 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/16 18:52:31 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		count(char const *s, char c)
{
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void			*free_strs(char **strs)
{
	size_t		i;

	i = 0;
	while (strs[i] != 0)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}

char				**ft_split(char const *s, char c)
{
	char		**res;
	size_t		i;
	size_t		j;

	if (!s)
		return (0);
	if (!(res = malloc(sizeof(char*) * (count(s, c) + 1))))
		return (0);
	j = 0;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		i = 0;
		while (s[i] && s[i] != c)
			i++;
		if (!(res[j++] = ft_strndup(s, i)))
			return (free_strs(res));
		s += i;
	}
	res[j] = 0;
	return (res);
}
