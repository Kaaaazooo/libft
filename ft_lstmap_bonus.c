/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:39:26 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/16 19:17:27 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*res;
	t_list	*tmp;
	int		count;

	count = 0;
	if (!lst || !f || !(res = malloc((sizeof(t_list)) * (ft_lstsize(lst)))))
		return (0);
	while (lst->next)
	{
		res->content = f(lst->content);
		res->next = ft_lstnew(lst->next->content);
		if (count == 0)
			tmp = res;
		lst = lst->next;
		res = res->next;
		count++;
	}
	res->content = f(lst->content);
	res->next = 0;
	return (count == 0 ? res : tmp);
}
