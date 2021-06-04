/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:37:37 by avivien           #+#    #+#             */
/*   Updated: 2020/11/02 13:49:03 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mal;
	unsigned int	i;

	if (s == 0)
		return (0);
	i = 0;
	mal = malloc(ft_strlen(s) + 1);
	if (mal == 0)
		return (0);
	while (s[i])
	{
		mal[i] = (*f)(i, s[i]);
		i++;
	}
	mal[i] = '\0';
	return (mal);
}
