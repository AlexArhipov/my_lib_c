/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 10:40:45 by avivien           #+#    #+#             */
/*   Updated: 2020/11/02 13:01:22 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*chek;

	if (!lst)
		return (0);
	while (lst)
	{
		chek = lst;
		lst = lst->next;
	}
	return (chek);
}
