/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:10:54 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/11 15:23:07 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

int	ft_puthex(long int n, char	*base, char flag)
{
	int	len;

	len = 0;
	if ((flag == '#') && (n != 0))
	{
		if (ft_strncmp(base, "0123456789abcdef", 16) == 0)
			len += ft_putstr("0x");
		else if (ft_strncmp(base, "0123456789ABCDEF", 16) == 0)
			len += ft_putstr("0X");
	}
	len += ft_putnbr_base(n, base);
	return (len);
}
