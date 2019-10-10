/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:15:57 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/10 16:51:16 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*static char			**assign_strs(const char *s, char c, char **res,
															unsigned int count)
{
	unsigned int	len;
	unsigned int	i;
	unsigned char	*p;

	len = 0;
	i = 0;
	while (i < count)
	{
		len = ft_strlen(s)
		p = ft_memchr(s, (unsigned int)c, len);
		if (p)
		{
			ft_memcpy(s[i], s, ft_strlen(s) - ft_strlen((char*)p) + 1);
			ft_memchr(s[i], c, len)
		}
		i++;
	}
}*/

static char			**assign_strs(const char *s, char c, char **res,
															unsigned int count)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	len_s;

	i = 0;
	len = 0;
	len_s = ft_strlen(s);
	while (i < count)
	{
		len_s -= len_s - len;
		len = ft_strlen(ft_memchr(s, (int)c, len_s));
		res[i] = ft_strndup(s, (len_s - len));
		printf("len_s = %u ; len = %u ; len_s - len = %d\n", len_s, len, len_s - len);
		printf("res[%d] = %s\n", i, res[i]);
		i++;
		s += len_s - len;
		while (*s == c)
			s++;
	}
	printf("res[%d] = %s\n", i, res[i]);
	res[i] = 0;
	free((void*)res);
	return (res);
}

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
	printf("count = %d\n", count);
	if (!(res = malloc(sizeof(char*) * (count + 1))))
		return (0);
	return (assign_strs(s, c, res, count));
}

char				**ft_split(char const *s, char c)
{
	char			**res;

	res = count_strs(s, c);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 0)
		return (0);
	ft_split(av[1], av[2][0]);
	return (0);
}
