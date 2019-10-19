/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:24:39 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/19 12:22:56 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*str;

	i = 0;
	uc = (unsigned char)c;
	str = (unsigned char*)b;
	while (i < len)
	{
		str[i] = uc;
		i++;
	}
	return (b);
}
