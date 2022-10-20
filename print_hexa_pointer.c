/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:37:25 by frgutier          #+#    #+#             */
/*   Updated: 2022/10/20 08:38:48 by frgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_pointer(void *p)
{
	unsigned long long	pointer;
	int					let;

	let = 0;
	pointer = (unsigned long long)p;
	if (write(1, "0x", 2) != 2)
		return (-1);
	let = puthexa_long("0123456789abcdef", pointer, let);
	if (let == -1)
		return (-1);
	let += 2;
	return (let);
}
