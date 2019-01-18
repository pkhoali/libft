/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 16:06:16 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/04 17:31:21 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*k;

	p = (unsigned char *)s1;
	k = (unsigned char *)s2;
	while (n--)
	{
		if (*p != *k)
		{
			return (*p - *k);
		}
		p++;
		k++;
	}
	return (0);
}
