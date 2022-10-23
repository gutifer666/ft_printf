/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:30:35 by frgutier          #+#    #+#             */
/*   Updated: 2022/10/23 17:59:38 by frgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_lower(int n)
{
	int		length;

	length = 0;
	if (n >= 0)
		length = puthexa_long("0123456789abcdef", n, length);
	else if (n < 0)
		length = puthexa_uns("0123456789abcdef", n, length);
	return (length);
}
