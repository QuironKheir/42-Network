/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:46:40 by aenrique          #+#    #+#             */
/*   Updated: 2022/01/31 16:46:51 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*l1;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		l1 = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = l1;
	}
	lst = NULL;
}
