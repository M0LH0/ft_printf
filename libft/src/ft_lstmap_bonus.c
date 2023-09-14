/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:39:37 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/14 17:31:40 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	new_list = NULL;
	while (lst != NULL)
	{
		ft_lstadd_back(&new_list, ft_lstnew(f(lst->content)));
		if (lst == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_list);
}
