/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:25:34 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/15 18:09:49 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	if (n)
	{
		d = (unsigned char*)dst;
		s = (unsigned char*)src;
		while (i < n)
		{
			d[i] = s[i];
			if (d[i] == (unsigned char)c)
				return (&d[i] + 1);
			i++;
		}
	}
	return (0);
}
