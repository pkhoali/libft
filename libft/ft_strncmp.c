/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 23:26:37 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/05 01:59:05 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (len > 0 && *s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
		len--;
	}
	if (len == 0)
		return (0);
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}
