/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 13:05:48 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/11 14:51:59 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_num_words(char const *s, char d)
{
	size_t	num_words;
	size_t	i;

	i = 0;
	num_words = 0;
	if (s[i] && (s[i] != d) && (s[i + 1] != d) && (s[i + 1] != 0))
		num_words++;
	while (s[i])
	{
		if ((s[i] == d) && (s[i + 1] != d) && (s[i + 1] != 0))
			num_words++;
		i++;
	}
	return (num_words);
}
