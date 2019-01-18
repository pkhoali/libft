/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 04:41:27 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/07 04:09:22 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int fd)
{
	if (fd == -2147483648)
		ft_putstr("-2147483648");
	if (fd < 0 && fd > -2147483648)
	{
		ft_putchar('-');
		fd *= -1;
	}
	if (fd < 10 && fd > -2147483648)
		ft_putchar(fd + 48);
	else if (fd >= 10)
	{
		ft_putnbr(fd / 10);
		ft_putnbr(fd % 10);
	}
}
