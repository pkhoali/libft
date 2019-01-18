/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 13:10:55 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/11 17:36:42 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_splitstr(char **arr, const char *s, char d, size_t len)
{
	size_t	count;
	size_t	wordlen;
	size_t	i;

	count = 0;
	i = 0;
	while (count < len)
	{
		wordlen = 0;
		while (s[i] == d && s[i])
			i++;
		while (s[i] != d && s[i])
		{
			wordlen++;
			i++;
		}
		if ((arr[count] = ft_strsub(&s[i - wordlen], 0, wordlen)) == NULL)
			return (0);
		count++;
	}
	arr[count] = 0;
	return (1);
}
