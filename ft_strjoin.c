/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:03:41 by avivien           #+#    #+#             */
/*   Updated: 2020/11/02 13:23:27 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ls1;
	int		ls2;
	char	*mal;
	char	*st;

	if (s1 == 0 || s2 == 0)
		return (0);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	mal = (char *)malloc(ls1 + ls2 + 1);
	st = mal;
	if (mal == 0)
		return (0);
	while (*s1)
		*mal++ = *s1++;
	while (*s2)
		*mal++ = *s2++;
	*mal = '\0';
	return (st);
}
