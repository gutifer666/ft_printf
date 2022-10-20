/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:30:35 by frgutier          #+#    #+#             */
/*   Updated: 2022/10/20 08:24:18 by frgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_lower(int n)
{
	int		let;

	let = 0;
	if (n >= 0)
		let = puthexa_long("0123456789abcdef", n, let);
	else if (n < 0)
		let = puthexa_uns("0123456789abcdef", n, let);
	return (let);
}
