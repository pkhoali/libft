/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 08:41:24 by pkhoali           #+#    #+#             */
/*   Updated: 2018/06/06 09:17:30 by pkhoali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_len(const char *str, char c)
{
	char	*temp;

	temp = (char *)str;
	while (*str != c && *str)
		++str;
	return (str - temp);
}
