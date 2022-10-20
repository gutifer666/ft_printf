/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_capital.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:22:34 by frgutier          #+#    #+#             */
/*   Updated: 2022/10/20 08:24:47 by frgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_capital(int n)
{
	int		let;

	let = 0;
	if (n >= 0)
		let = puthexa_long("0123456789ABCDEF", n, let);
	else if (n < 0)
		let = puthexa_uns("0123456789ABCDEF", n, let);
	return (let);
}
