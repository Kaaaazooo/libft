/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:39:26 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/14 18:51:31 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	*ft_iteronce(void *content)
{
	unsigned int	i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char*)content;
	while (s[i])
	{
		s[i] += 1;
		i++;
	}
	return ((void*)s);
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*res;
	t_list	*tmp;
	int		count;

	count = 0;
	if (!(res = malloc((sizeof(t_list)) * (ft_lstsize(lst)))))
		return (0);
	while (lst->next)
	{
		res->content = f(lst->content);
		res->next = ft_lstnew(lst->next->content);
		if (count == 0)
			tmp = res;
//		printf("%s\n", res->content);
		lst = lst->next;
		res = res->next;
		count++;
	}
	res->content = f(lst->content);
	res->next = 0;
	return (tmp);
}

int		main()
{
	char	s1[5] = "0000\0";
	t_list	*a = ft_lstnew(s1);
	t_list	*b = ft_lstnew(s1);
	t_list	*c = ft_lstnew(s1);
	t_list	*d = ft_lstnew(s1);
	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	ft_lstadd_back(&a, d);
	t_list	*res = ft_lstmap(a, &ft_iteronce);
	while (res)
	{
		printf("%s\n", res->content);
		res = res->next;
	}
	return (0);
}
