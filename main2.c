/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:49:11 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/08 12:00:12 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		main(int ac, char **av)
{
	if (ac == 0)
		return (0);
	printf("Ma fonction : %s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}
