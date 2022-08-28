/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 20:19:36 by aenrique          #+#    #+#             */
/*   Updated: 2022/03/18 20:28:32 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long long tmp)
{
	int	c;

	c = 2;
	write(1, "0x", c);
	c += ft_put_pointer((unsigned long long)tmp, "0123456789abcdef");
	return (c);
}

int	ft_put_pointer(unsigned long long nbr, char *base)
{
	unsigned long long	size;
	int					count;

	count = 0;
	size = 16;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nbr >= size)
	{
		count += ft_put_pointer(nbr / size, base);
		count += ft_putchar(base[nbr % size]);
	}
	else
		count += ft_putchar(base[nbr % size]);
	return (count);
}
