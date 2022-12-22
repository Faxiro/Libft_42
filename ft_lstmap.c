/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleroy <tleroy@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:59:33 by tleroy            #+#    #+#             */
/*   Updated: 2022/12/22 18:20:29 by tleroy           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_lst;
	t_list	*new_start;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	lst = lst->next;
	new_start = new_lst;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!new_lst)
		{
			ft_lstclear(&new_start, del);
			return (NULL);
		}
		lst = lst->next;
		new_lst->next = temp;
		new_lst = new_lst->next;
	}
	return (new_start);
}
