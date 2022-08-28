/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:15:23 by aenrique          #+#    #+#             */
/*   Updated: 2022/03/18 20:27:02 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_special(const char *f, va_list args)
{
	if (*(f + 1) == '%')
		return (ft_putchar('%'));
	else if (*(f + 1) == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*(f + 1) == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (*(f + 1) == 'p')
		return (ft_print_pointer((unsigned long long)va_arg(args, void *)));
	else if (*(f + 1) == 'd' || *(f + 1) == 'i')
		return (ft_putnbr(va_arg(args, int), "0123456789", 1));
	else if (*(f + 1) == 'u')
		return (ft_putu(va_arg(args, unsigned int), "0123456789"));
	else if (*(f + 1) == 'x')
		return (ft_putx(va_arg(args, unsigned int), "0123456789abcdef", 0));
	else if (*(f + 1) == 'X')
		return (ft_putx(va_arg(args, unsigned int), "0123456789ABCDEF", 0));
	else
		return (ft_putchar(*(f + 1)));
	return (0);
}
