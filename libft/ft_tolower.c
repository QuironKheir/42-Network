/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:52:54 by aenrique          #+#    #+#             */
/*   Updated: 2022/01/16 17:26:29 by aenrique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** SYNOPSIS:
**		#include	<ctype.h>
**		int	tolower(int c);
**
** DESCRIPTION:
** 		The tolower() function converts an upper-case letter to
**		lower-case letter.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
