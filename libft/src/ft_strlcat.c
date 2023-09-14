/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:57:49 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/14 17:32:22 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i_s;
	size_t	len;
	size_t	i_d;

	i_s = 0;
	i_d = ft_strlen(dst);
	len = ft_strlen(dst) + ft_strlen(src);
	if (i_d < size)
	{
		while ((src[i_s] != '\0') && (i_d < size - 1))
		{
			dst[i_d] = src[i_s];
			i_s++;
			i_d++;
		}
		dst[i_d] = '\0';
		return (len);
	}
	return (ft_strlen(src) + size);
}
