/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 22:02:16 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/11 17:36:02 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		len;

	if (!s)
		return (NULL);
	len = ft_num_words(s, c);
	if ((arr = ((char **)ft_memalloc(sizeof(char *) * len + 1))) == NULL)
		return (NULL);
	if (ft_splitstr(arr, s, c, len))
		return (arr);
	else
		ft_memdel((void **)arr);
	return (arr);
}
