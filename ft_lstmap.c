/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avivien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:13:31 by avivien           #+#    #+#             */
/*   Updated: 2020/11/03 14:17:13 by avivien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *mal;
	t_list *temp;

	if (lst == 0)
		return (0);
	mal = ft_lstnew((*f)(lst->content));
	if (mal == 0)
		return (0);
	temp = mal;
	if (lst->next == 0)
		return (temp);
	lst = lst->next;
	while (lst)
	{
		mal = ft_lstnew((*f)(lst->content));
		if (mal != 0)
			ft_lstadd_back(&temp, mal);
		else
			ft_lstclear(&temp, del);
		lst = lst->next;
	}
	return (temp);
}
