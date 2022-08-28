/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:50:34 by aenrique          #+#    #+#             */
/*   Updated: 2022/02/03 19:07:55 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*n;

	if (!lst)
		return (NULL);
	n = NULL;
	while (lst)
	{
		t = ft_lstnew((*f)((*lst).content));
		if (t)
			ft_lstadd_back(&n, t);
		else
		{
			while (n)
			{
				ft_lstclear(&n, (*del));
				return (0);
			}
		}
		lst = (*lst).next;
	}
	return (n);
}
