/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:42:46 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/15 14:25:44 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	len1;
	unsigned int	len2;

	len1 = 0;
	len2 = 0;
	if (!s1 && !s2)
		return (0);
	if (s1)
		len1 = ft_strlen(s1);
	if (s2)
		len2 = ft_strlen(s2);
	if (!(str = malloc(sizeof(*str) * (len1 + len2 + 1))))
		return (0);
	if (!s1)
		return (ft_strcpy(str, s2));
	if (!s2)
		return (ft_strcpy(str, s1));
	ft_strcpy(str, s1);
	return (ft_strcat(str, s2));
}
