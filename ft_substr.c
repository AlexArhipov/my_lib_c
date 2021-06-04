/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:38:42 by avivien           #+#    #+#             */
/*   Updated: 2020/11/02 13:26:31 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*dest;
	char	*st;

	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	dest = (char *)malloc(len * (sizeof(char)) + 1);
	if (dest == 0)
		return (0);
	st = dest;
	while (start-- && *s)
		s++;
	while (len-- && *s)
		*dest++ = *s++;
	*dest = '\0';
	return (st);
}
