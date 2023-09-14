/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:38:25 by lsilva-p          #+#    #+#             */
/*   Updated: 2023/09/07 14:58:28 by lsilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

int	ft_putstr(char	*s)
{
	if (s == NULL)
		return (ft_putstr("(null)"));
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}
