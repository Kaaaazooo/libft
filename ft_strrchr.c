/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:10:19 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/19 18:18:25 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;
	char		*str;

	len = ft_strlen(s) + 1;
	str = (char *)s;
	while (len--)
	{
		if (s[len] == (char)c)
			return ((char*)&str[len]);
	}
	return (0);
}
