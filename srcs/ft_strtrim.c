/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:19:42 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/11 13:56:57 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int			is_set(const char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int			skip_set(char const *s1, char const *set)
{
	unsigned int i;

	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	return (i);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;
	unsigned char	*res;

	i = 0;
	if (s1 == 0 || s1[0] == 0)
		return ((char*)s1);
	start = skip_set(s1, set);
	end = ft_strlen(s1);
	if (start == end)
		return ("");
	while (is_set(s1[end - 1], set))
		end--;
	if (!(res = malloc(sizeof(*res) * (end - start + 1))))
		return (0);
	res[end - start] = 0;
	while (i < end - start)
	{
		res[i] = s1[start + i];
		i++;
	}
	return ((char*)res);
}

int		main(int ac, char **av)
{
	if (ac == 0)
		return (0);
	printf("%s\n", ft_strtrim(av[1], av[2]));
	return (0);
}
