/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:35:15 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/06 11:14:25 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putptr(unsigned long n, char *base)
{
	unsigned long	len;
	unsigned long	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (n == 0)
		return (ft_putstr("(nil)"));
	if (n >= base_len)
		len += ft_putptr((n / base_len), base);
	else
		len += ft_putstr("0x");
	len += ft_putchar(base[n % base_len]);
	return (len);
}
