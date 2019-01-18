/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 16:56:30 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/07 04:43:05 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	if (!(p = (char *)malloc((sizeof(char) * len) + 1)))
		return (NULL);
	if (p)
	{
		while (s[i] != '\0')
		{
			p[i] = s[i];
			i++;
		}
	}
	p[i] = '\0';
	return (p);
}
