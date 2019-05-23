/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:31:36 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/23 19:10:36 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list*		ft_lstmap(t_list *lst, t_list* (*f)(t_list *elem))
{
	t_list	*root;
	t_list	*node1;

	if( !lst || !f)
		return (NULL);
	if(!(root = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	*(root) = *f(lst);
	node1 = root;
	lst = lst->next;
	while (lst != NULL)
	{
		if(!(node1->next = (t_list*)malloc(sizeof(t_list))))
			return (NULL);
		*(node1->next) = *f(lst);
		node1 = node1->next;
		lst = lst->next;
	}
	return (root);
}