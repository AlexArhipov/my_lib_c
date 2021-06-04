/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:01:56 by avivien           #+#    #+#             */
/*   Updated: 2020/11/02 13:31:23 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*src_temp;
	char		*dst_temp;

	src_temp = (const char *)src;
	dst_temp = (char *)dst;
	if (src_temp == 0 && dst_temp == 0)
		return (0);
	while (n--)
		*dst_temp++ = *src_temp++;
	return (dst);
}
