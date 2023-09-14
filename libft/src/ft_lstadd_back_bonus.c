/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:37:21 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/14 17:31:22 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstnode;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	lstnode = ft_lstlast(*lst);
	lstnode->next = new;
}
