/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 00:00:09 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/14 19:57:23 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[j])
		{
			if (s2[j] != s1[i + j])
				break ;
			else if (!s2[j + 1])
				return ((char *)s1 + i);
			else
				j++;
		}
		i++;
	}
	return (NULL);
}
