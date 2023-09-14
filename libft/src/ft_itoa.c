/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:11:53 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/14 17:31:19 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	ft_digit_counter(int number)
{
	int	lenght;

	lenght = 0;
	if (number <= 0)
	{
		lenght++;
	}
	while (number)
	{
		lenght++;
		number = number / 10;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	int			len;
	long		num;
	char		*result;

	len = ft_digit_counter(n);
	num = n;
	result = (char *)malloc((len + 1) * (sizeof(char)));
	if (result == NULL)
		return (NULL);
	if (num == 0)
		result[0] = '0';
	if (num < 0)
	{
		result[0] = '-';
		num *= -1;
	}
	result[len] = '\0';
	len--;
	while (num)
	{
		result[len] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (result);
}
