/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:36:55 by avivien           #+#    #+#             */
/*   Updated: 2020/11/05 09:52:46 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strchr1(const char *str, char ch)
{
	while (*str)
	{
		if (*str == ch)
			return (1);
		str++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t		last;
	size_t		fist;

	if (s1 == 0 || set == 0)
		return (0);
	last = ft_strlen(s1) - 1;
	fist = 0;
	while (ft_strchr1(set, s1[last]))
		last--;
	last++;
	while (ft_strchr1(set, s1[fist]))
		fist++;
	if (ft_strlen(s1) == fist)
		return (ft_substr("", 0, 1));
	return (ft_substr(s1, fist, last - fist));
}
