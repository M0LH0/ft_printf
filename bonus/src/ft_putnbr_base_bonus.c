/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:38:27 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/07 11:37:03 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

int	ft_putnbr_base(long int n, char *base)
{
	int	len;
	int	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (n == -2147483648)
	{
		len += ft_putchar('-');
		len += ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		len += ft_putchar('-');
		n *= -1;
	}
	if (n >= base_len)
	{
		len += ft_putnbr_base((n / base_len), base);
	}
	len += ft_putchar(base[n % base_len]);
	return (len);
}
