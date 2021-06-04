/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:34:29 by avivien           #+#    #+#             */
/*   Updated: 2020/10/29 17:43:14 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const char *s;

	s = (const char *)src;
	while (n--)
		if (*s++ == c)
			return (char *)(s - 1);
	return (0);
}
