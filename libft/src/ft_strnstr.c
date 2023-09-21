/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:58:00 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/14 17:32:38 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	ch1;
	size_t	ch2;

	ch1 = 0;
	ch2 = 0;
	if (to_find[ch2] == '\0')
		return ((char *)str);
	ch1 = 0;
	while (str[ch1] && ch1 < len)
	{
		ch2 = 0;
		while (ch1 + ch2 < len && str[ch1 + ch2] == to_find[ch2]
			&& to_find[ch2])
			ch2++;
		if (!to_find[ch2])
			return ((char *)str + ch1);
		ch1++;
	}
	return (NULL);
}
