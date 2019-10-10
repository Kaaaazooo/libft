/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:42:46 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/10 13:08:36 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!(str = malloc(sizeof(*str) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	ft_strcpy(str, s1);
	return (ft_strcat(str, s2));
}
