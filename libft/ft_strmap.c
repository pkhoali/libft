/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 04:22:04 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/07 05:22:11 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*p;

	if (!f || !s)
		return (NULL);
	i = 0;
	p = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (p)
	{
		while (s[i])
		{
			p[i] = f((char)s[i]);
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
