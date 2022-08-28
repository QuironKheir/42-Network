/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft_others.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:07:42 by aenrique          #+#    #+#             */
/*   Updated: 2022/03/18 20:32:47 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (str[i])
	{
		s += ft_putchar(str[i]);
		i++;
	}
	return (s);
}

int	ft_putnbr(int nbr, char *base, int a)
{
	unsigned int	n;
	unsigned int	size;
	int				count;

	count = 0;
	size = 10;
	if (size == 0)
		return (0);
	if (nbr < 0 && a == 1)
	{
		count += ft_putchar('-');
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n >= size)
	{
		count += ft_putnbr(n / size, base, a);
		count += ft_putchar(base[n % size]);
	}
	else
		count += ft_putchar(base[n % size]);
	return (count);
}
