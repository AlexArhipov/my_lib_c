/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 13:48:57 by avivien           #+#    #+#             */
/*   Updated: 2020/11/03 11:09:01 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2 != '\0')
		*s1++ = *s2++;
	*s1 = '\0';
	return (s1);
}

char		*ft_strdup(char *src)
{
	char *s2;

	s2 = malloc(ft_strlen(src) + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strcpy(s2, src);
	return (s2);
}
