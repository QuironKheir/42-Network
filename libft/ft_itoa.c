/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 23:10:30 by aenrique          #+#    #+#             */
/*   Updated: 2022/01/23 23:19:41 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_intmin(void)
{
	char	*memory;
	char	*intmin;
	size_t	i;

	i = 0;
	intmin = "-2147483648";
	memory = (char *)malloc(12);
	if (!memory)
		return (0);
	while (i < 12)
	{
		memory[i] = intmin[i];
		i++;
	}
	return (memory);
}

char	*ft_convert(int n, int minus)
{
	int		i;
	int		j;
	char	buff[11];
	char	*memory;

	i = 11;
	while (--i >= 0)
	{
		buff[i] = n % 10 + '0';
		n = n / 10;
		if (n == 0)
		{
			if (minus)
				buff[--i] = '-';
			memory = (char *)malloc(12 - i);
			if (!memory)
				return (0);
			j = -1;
			while (++j < 11 - i)
				memory[j] = buff[i + j];
			memory[j] = 0;
			return (memory);
		}
	}
	return (0);
}

char	*ft_itoa(int n)
{
	int		minus;

	minus = 0;
	if (n == -2147483648)
		return (ft_intmin());
	if (n < 0)
	{
		minus = 1;
		n *= -1;
	}
	return (ft_convert(n, minus));
}
