/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:08:17 by aenrique          #+#    #+#             */
/*   Updated: 2022/03/18 20:17:14 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	va_list	args;
	int		count;

	va_start (args, f);
	count = 0;
	while (*f)
	{
		if (*f == '%')
		{
			if (*(f + 1) == '%')
				count += ft_putchar('%');
			else
				count += ft_special(f, args);
			f = f + 2;
		}
		else
		{
			count += ft_putchar(*f);
			f++;
		}
	}
	va_end(args);
	return (count);
}
