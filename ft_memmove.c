/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:53:59 by avivien           #+#    #+#             */
/*   Updated: 2020/11/02 13:33:31 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char	*src_temp;
	unsigned char		*dst_temp;
	unsigned char		*last_dst;
	const unsigned char	*last_src;

	src_temp = (const unsigned char *)src;
	dst_temp = (unsigned char *)dst;
	if (src_temp == 0 && dst_temp == 0)
		return (0);
	if (dst_temp < src_temp)
		while (n--)
			*dst_temp++ = *src_temp++;
	else
	{
		last_src = src + (n - 1);
		last_dst = dst + (n - 1);
		while (n--)
			*last_dst-- = *last_src--;
	}
	return (dst);
}
