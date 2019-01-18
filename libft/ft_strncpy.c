/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 21:57:35 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/04 20:46:44 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		t;
	char	*p;

	p = dst;
	i = 0;
	t = 0;
	while (i < len)
	{
		if (t != 0)
		{
			*p = '\0';
		}
		else
		{
			*p = *src;
			if ('\0' == *src)
				t = 1;
		}
		++i;
		++src;
		++p;
	}
	return (dst);
}
