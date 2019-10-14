/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:08:13 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/14 13:27:52 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_clear(void *str)
{
	str = 0;
	free(str);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*list;

	if (lst == 0 || del == 0 || *lst == 0)
		return ;
	tmp = *lst;
	list = *lst;
	while (list)
	{
		tmp = list->next;
		del(list->content);
		free(list);
		list = tmp;
	}
	*lst = 0;
}

int		main()
{
	char	s1[4] = "1111";
	char	s2[4] = "2222";
	char	s3[4] = "3333";
	char	s4[4] = "4444";
	t_list	*a = ft_lstnew(s1);
	t_list	*b = ft_lstnew(s2);
	t_list	*c = ft_lstnew(s3);
	t_list	*d = ft_lstnew(s4);

	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	ft_lstadd_back(&a, d);
	ft_lstclear(0, &ft_clear);
	printf("size = %d\n", ft_lstsize(a));
	while (a)
		a = a->next;
	printf("check :\n");
	return (0);
}
