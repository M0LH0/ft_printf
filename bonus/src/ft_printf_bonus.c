/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:33:32 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/11 16:21:45 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

static int	ft_check_arguments(va_list args, const char format, char flag)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	if (format == 'p')
		len += ft_putptr(va_arg(args, unsigned long long), HEXA_LOW_BASE);
	if (format == 'd' || format == 'i')
		len += ft_putplus_and_space(va_arg(args, int), DECIMAL_BASE, flag);
	if (format == 'u')
		len += ft_putnbr_base(va_arg(args, unsigned int), DECIMAL_BASE);
	if (format == 'x')
		len += ft_puthex(va_arg(args, unsigned int), HEXA_LOW_BASE, flag);
	if (format == 'X')
		len += ft_puthex(va_arg(args, unsigned int), HEXA_UP_BASE, flag);
	if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (str == NULL)
		return (-1);
	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			while (str[i] == '#' || str[i] == ' ' || str[i] == '+')
				i++;
			len += ft_check_arguments(args, str[i], str[i - 1]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
