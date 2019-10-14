/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:20:24 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/11 15:40:38 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest_u;
	unsigned char	*src_u;
	unsigned int	i;

	dest_u = (unsigned char*)dst;
	src_u = (unsigned char*)src;
	i = -1;
	if (dst == src)
		return (dst);
	if (src_u < dest_u)
	{
		while (len--)
			dest_u[len] = src_u[len];
	}
	else
	{
		while (++i < len)
			dest_u[i] = src_u[i];
	}
	return (dest_u);
}
