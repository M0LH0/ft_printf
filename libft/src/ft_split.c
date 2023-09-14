/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:11:30 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/14 17:32:10 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	ft_str_count(const char *str, char limiter)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == limiter)
			i++;
		if (str[i] && str[i] != limiter)
			counter++;
		while (str[i] && str[i] != limiter)
			i++;
	}
	return (counter);
}

static size_t	ft_substr_size(const char *str, char limiter, int start)
{
	size_t	len;

	len = 0;
	while (str[start] && str[start] != limiter)
	{
		start++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			start;
	int			num_words;
	size_t		len_substr;
	char		**substrs_array;

	if (!s)
		return (NULL);
	num_words = ft_str_count(s, c);
	substrs_array = (char **)ft_calloc((num_words + 1), sizeof(char *));
	if (!substrs_array)
		return (NULL);
	i = 0;
	start = 0;
	while (i < num_words)
	{
		while (s[start] && s[start] == c)
			start++;
		len_substr = ft_substr_size(s, c, start);
		substrs_array[i] = ft_substr(s, start, len_substr);
		start = start + len_substr + 1;
		i++;
	}
	return (substrs_array);
}
