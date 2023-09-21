/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:10:13 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/14 17:32:19 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		len_s1;
	int		len_s2;

	i = 0;
	len_s1 = 0;
	len_s2 = 0;
	new_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new_str)
		return (0);
	while (s1[len_s1] != '\0')
	{
		new_str[i] = s1[len_s1];
		i++;
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		new_str[i] = s2[len_s2];
		i++;
		len_s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}
