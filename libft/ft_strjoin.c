/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 04:35:23 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/07 05:56:29 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n;
	int		i;

	i = 0;
	if ((s1) && (s2))
	{
		i = (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		n = (char *)malloc(i);
		if (n == NULL)
			return (NULL);
		ft_strclr(n);
		ft_strcat(n, s1);
		ft_strcat(n, s2);
		return (n);
	}
	else
		return (NULL);
}
