/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 20:30:26 by aenrique          #+#    #+#             */
/*   Updated: 2022/03/18 20:33:36 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putu(unsigned int nbr, char *base)
{
	unsigned int	size;
	int				count;

	count = 0;
	size = 10;
	if (nbr == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (nbr >= size)
	{
		count += ft_putu(nbr / size, base);
		count += ft_putchar(base[nbr % size]);
	}
	else
		count += ft_putchar(base[nbr % size]);
	return (count);
}
