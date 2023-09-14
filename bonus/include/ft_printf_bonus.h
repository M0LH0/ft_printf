/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:30:48 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/14 17:33:58 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <unistd.h>

# include "../../libft/include/libft.h"

# define DECIMAL_BASE "0123456789"
# define HEXA_LOW_BASE "0123456789abcdef"
# define HEXA_UP_BASE "0123456789ABCDEF"

int		ft_printf(const char *args, ...);
int		ft_putchar(char c);
int		ft_putnbr_base(long int n, char *base);
int		ft_putptr(unsigned long n, char *base);
int		ft_putstr(char	*s);
int		ft_puthex(long int n, char	*base, char flag);
int		ft_putplus_and_space(long int n, char	*base, char flag);

#endif