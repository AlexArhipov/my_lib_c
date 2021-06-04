/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:38:09 by avivien           #+#    #+#             */
/*   Updated: 2020/11/02 13:25:38 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_rever(char *s)
{
	int i;
	int ch;
	int size;

	i = 0;
	size = ft_strlen(s);
	while (i < size / 2)
	{
		ch = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = ch;
		i++;
	}
	return (s);
}

static int	ft_raz(int n)
{
	unsigned int	i;
	int				c;

	c = 1;
	i = (unsigned int)n;
	if (n < 0)
	{
		c++;
		i = (unsigned int)n * -1;
	}
	while (i > 9)
	{
		c++;
		i = i / 10;
	}
	return (c);
}

char		*ft_itoa(int n)
{
	char			*mal;
	char			*st;
	unsigned int	c;

	c = (unsigned int)n;
	if (n < 0)
		c = (unsigned int)n * -1;
	mal = malloc(ft_raz(n) + 1 * sizeof(char));
	if (mal == 0)
		return (0);
	st = mal;
	while (c > 9)
	{
		*mal = (c % 10) + '0';
		c /= 10;
		mal++;
	}
	*mal++ = (c % 10) + '0';
	if (n < 0)
		*mal++ = '-';
	*mal = '\0';
	return (ft_rever(st));
}
