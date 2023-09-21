/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:10:52 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/14 17:32:42 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_last;
	int		i_first;

	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	i_first = 0;
	while (s1[i_first] && ft_strchr(set, s1[i_first]))
	{
		i_first++;
	}
	i_last = ft_strlen(s1);
	while (i_last && ft_strchr(set, s1[i_last - 1]))
	{
		i_last--;
	}
	return (ft_substr(s1, i_first, i_last - i_first));
}
