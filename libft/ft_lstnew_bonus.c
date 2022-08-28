/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:23:07 by aenrique          #+#    #+#             */
/*   Updated: 2022/02/02 16:05:40 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*x;

	x = (t_list *)malloc(sizeof(t_list));
	if (x == NULL)
		return (0);
	(*x).next = NULL;
	(*x).content = content;
	return (x);
}
