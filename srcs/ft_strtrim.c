/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:19:42 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/10 14:59:23 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int			ft_countset(char const *str, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == str[i])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

static unsigned char		*ft_skipset(char const *str,
									char const *set, unsigned char *res)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == str[i])
				break ;
			j++;
		}
		if (!set[j])
		{
			res[k] = (unsigned char)str[i];
			k++;
		}
		i++;
	}
	res[k] = 0;
	return (res);
}

char						*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	*res;

	if (!(res = malloc(sizeof(*res) * (ft_strlen(s1) -
											ft_countset(s1, set) + 1))))
		return (0);
	res = ft_skipset(s1, set, res);
	return ((char*)res);
}
