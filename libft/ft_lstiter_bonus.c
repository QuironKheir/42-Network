/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:48:46 by aenrique          #+#    #+#             */
/*   Updated: 2022/02/03 19:01:05 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*x;

	if (!lst || !f)
		return ;
	x = lst;
	while (x)
	{
		(*f)((*x).content);
		x = (*x).next;
	}
}
