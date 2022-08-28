/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:49:50 by aenrique          #+#    #+#             */
/*   Updated: 2022/02/03 15:05:45 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*x;

	if (!lst)
		return (NULL);
	x = lst;
	while ((*x).next)
		x = (*x).next;
	return (x);
}
