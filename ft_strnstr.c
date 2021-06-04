/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:27:53 by avivien           #+#    #+#             */
/*   Updated: 2020/11/02 13:29:28 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *des, const char *src, size_t n)
{
	size_t		len;
	const char	*s;
	const char	*m;

	if (src[0] == 0)
		return ((char *)des);
	len = ft_strlen((char *)src);
	s = src;
	while (n && *des)
	{
		src = s;
		m = des;
		while ((*des == *src) || (*src == '\0'))
		{
			if (!*src && n >= len)
				return ((char *)(des - len));
			des++;
			src++;
		}
		des = m;
		des++;
		n--;
	}
	return (0);
}
