/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:51:43 by avivien           #+#    #+#             */
/*   Updated: 2020/10/30 10:33:55 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int ch)
{
	char *temp;

	temp = 0;
	while (*str)
	{
		if (*str == ch)
			temp = (char *)str;
		str++;
	}
	if (*str == ch)
		temp = (char *)str;
	return (temp);
}
