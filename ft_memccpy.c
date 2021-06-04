/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:26:56 by avivien           #+#    #+#             */
/*   Updated: 2020/11/02 13:06:26 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	unsigned char		cc;

	s = (unsigned const char *)src;
	d = (unsigned char *)dst;
	cc = (unsigned char)c;
	while (n--)
	{
		if (*s == cc)
		{
			*d = *s;
			return (d + 1);
		}
		*d++ = *s++;
	}
	return (NULL);
}
