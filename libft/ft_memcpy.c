/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:16:50 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/04 16:33:34 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;
	char	*k;
	int		i;

	i = 0;
	p = dst;
	k = (char *)src;
	while (n--)
	{
		*p++ = *k++;
	}
	return (dst);
}
