/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:25:34 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/10 15:38:21 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*p;

	p = ft_memchr(src, c, n);
	if (p)
	{
		ft_memcpy(dst, src, ft_strlen(src) - ft_strlen((char*)p) + 1);
		return (ft_memchr(dst, c, n) + 1);
	}
	ft_memcpy(dst, src, n);
	return (0);
}
