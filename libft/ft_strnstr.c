/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:07:24 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/07 02:48:55 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	size_t	p;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && len)
	{
		j = 0;
		p = len;
		while (needle[j] && p)
		{
			if (needle[j] != haystack[i + j])
				break ;
			if (!needle[j + 1])
				return ((char *)haystack + i);
			j++;
			p--;
		}
		i++;
		len--;
	}
	return (NULL);
}
