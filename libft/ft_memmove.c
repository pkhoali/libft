/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:06:51 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/04 17:11:20 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*k;
	char		*p;

	p = dst;
	k = src;
	if (p < k)
	{
		while (len--)
		{
			*p++ = *k++;
		}
	}
	else
	{
		p += len;
		k += len;
		while (len--)
		{
			*--p = *--k;
		}
	}
	return (dst);
}
