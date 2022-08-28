/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:08:42 by aenrique          #+#    #+#             */
/*   Updated: 2022/03/18 20:28:29 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_print_str(char *str);
int	ft_special(const char *f, va_list args);
int	ft_printf(const char *f, ...);
int	ft_put_pointer(unsigned long long nbr, char *base);
int	ft_print_pointer(unsigned long long tmp);
int	ft_putnbr(int nbr, char *base, int a);
int	ft_putu(unsigned int nbr, char *base);
int	ft_putx(unsigned int nbr, char *base, int a);

#endif
