/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 03:57:02 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/06 08:10:14 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*p;

	i = 0;
	if ((p = (char*)malloc(size * sizeof(char))) == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
