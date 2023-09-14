/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putplus_and_space_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:06:25 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/11 15:23:27 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

int	ft_putplus_and_space(long int n, char	*base, char flag)
{
	int	len;

	len = 0;
	if (flag == '+' && n >= 0)
		len += ft_putchar('+');
	else if (flag == ' ' && n >= 0)
		len += ft_putchar(' ');
	len += ft_putnbr_base(n, base);
	return (len);
}
