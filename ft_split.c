/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:54:50 by avivien           #+#    #+#             */
/*   Updated: 2020/11/05 10:08:54 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_split(char const *s, char c)
{
	char	**mal;
	int		i;
	int		j;
	int		m;

	if (s == 0)
		return (0);
	i = -1;
	j = 0;
	while (s[++i])
		if ((s[i] == c && (s[i + 1] != c || s[i + 1] != 0))
				|| (s[i] != c && s[i + 1] == 0))
			j++;
	if (!(mal = (char **)malloc(j * sizeof(char *) + 1)))
		return (0);
	m = -1;
	i = 0;
	j = 0;
	while (s[++m])
		if (s[m] == c && (s[m + 1] != c || s[m + 1] != 0))
			j = m + 1;
		else if (s[m] != c && (s[m + 1] == 0 || s[m + 1] == c))
			mal[i++] = ft_substr(s, j, m - j + 1);
	mal[i] = 0;
	return (mal);
}
