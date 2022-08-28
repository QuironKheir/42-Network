/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 20:06:03 by aenrique          #+#    #+#             */
/*   Updated: 2022/03/18 20:21:23 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putx(unsigned int nbr, char *base, int a)
{
	unsigned int	size;
	int				count;

	count = 0;
	size = 16;
	if (size == 0)
		return (0);
	if (nbr >= size)
	{
		count += ft_putx(nbr / size, base, a);
		count += ft_putchar(base[nbr % size]);
	}
	else
		count += ft_putchar(base[nbr % size]);
	return (count);
}
