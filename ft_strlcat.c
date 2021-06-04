/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:57:52 by avivien           #+#    #+#             */
/*   Updated: 2020/11/03 11:06:39 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t sized;

	i = 0;
	j = 0;
	if (!n)
		return (ft_strlen(src));
	sized = ft_strlen(dst);
	if (sized >= n)
		return (n + ft_strlen(src));
	while (j < (n - sized - 1) && src[i])
	{
		dst[j + sized] = src[i];
		i++;
		j++;
	}
	dst[j + sized] = 0;
	return (sized + ft_strlen(src));
}
