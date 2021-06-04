/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:14:16 by avivien           #+#    #+#             */
/*   Updated: 2020/11/03 14:14:17 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *chek;
	t_list *temp;

	if (lst == 0)
		return ;
	chek = *lst;
	while (chek)
	{
		temp = chek->next;
		(*del)(chek->content);
		free(chek);
		chek = temp;
	}
	*lst = 0;
}
