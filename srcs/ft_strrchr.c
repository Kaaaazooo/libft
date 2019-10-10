/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:10:19 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/10 10:58:02 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*res;
	unsigned int	i;

	res = 0;
	i = -1;
	while (++i < ft_strlen(s) + 1)
	{
		if (s[i] == (char)c)
			res = (char*)&s[i];
	}
	return (res);
}
