/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:19:07 by frgutier          #+#    #+#             */
/*   Updated: 2022/10/18 09:25:17 by frgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	print_number_unsigned(unsigned int num)
{
	int	let;

	let = 0;
	if (num > 9)
	{
		let = print_number_unsigned(num / 10);
		if (let == -1)
			return (-1);
		num = num % 10;
	}
	if (num <= 9)
	{
		if (print_char (('0' + num)) == -1)
			return (-1);
		let++;
	}
	return (let);
}
