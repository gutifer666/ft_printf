/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_nosign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:19:07 by frgutier          #+#    #+#             */
/*   Updated: 2022/10/17 09:19:32 by frgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_num_nosign(unsigned int num)
{
	int	let;

	let = 0;
	if (num > 9)
	{
		let = ft_num_nosign(num / 10);
		if (let == -1)
			return (-1);
		num = num % 10;
	}
	if (num <= 9)
	{
		if (ft_putchar (('0' + num)) == -1)
			return (-1);
		let++;
	}
	return (let);
}
