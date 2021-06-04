/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:21:23 by avivien           #+#    #+#             */
/*   Updated: 2020/10/31 13:12:19 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	int			i;

	if (dst == 0 && src == 0)
		return (0);
	i = ft_strlen(src);
	if (!n)
		return (i);
	n -= 1;
	if (dst == 0 && src == 0)
		return (0);
	while (n-- && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (i);
}
