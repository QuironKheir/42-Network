/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:43:42 by aenrique          #+#    #+#             */
/*   Updated: 2022/02/03 14:52:30 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*t_tmp;

	t_tmp = lst;
	size = 0;
	while (t_tmp)
	{
		t_tmp = (*t_tmp).next;
		size ++;
	}
	return (size);
}
