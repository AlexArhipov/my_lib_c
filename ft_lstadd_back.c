/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 10:46:47 by avivien           #+#    #+#             */
/*   Updated: 2020/11/02 13:04:19 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *chek;
	t_list *start;

	start = *lst;
	chek = 0;
	if (!start)
		(*lst) = new;
	else
	{
		while (start)
		{
			chek = start;
			start = start->next;
		}
		chek->next = new;
	}
}
