/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:42:31 by frgutier          #+#    #+#             */
/*   Updated: 2022/10/23 13:25:55 by frgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	checker(char c, va_list element)
{
	if (c == 'c')
		return (print_char(va_arg(element, int)));
	if (c == 's')
		return (print_string(va_arg(element, char *)));
	if (c == 'p')
		return (print_hexa_pointer(va_arg(element, void *)));
	if (c == 'd' || c == 'i')
		return (print_number(va_arg(element, int)));
	if (c == 'u')
		return (print_number_unsigned(va_arg(element, unsigned int)));
	if (c == 'x')
		return (print_hexa_lower(va_arg(element, int)));
	if (c == 'X')
		return (print_hexa_capital(va_arg(element, int)));
	return (0);
}

static int	w_str_percent(char c, va_list element)
{
	int	length;

	length = 0;
	if (c != '%')
	{
		length = checker(c, element);
		if (length == -1)
			return (-1);
		return (length);
	}
	else
	{
		if (write (1, &c, 1) != 1)
			return (-1);
		return (1);
	}
}

static	int	w_str(const char *str, va_list element, int length)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			length = length + w_str_percent(str[i + 1], element);
			if (length == -1)
				return (-1);
			i++;
		}
		else
		{
			if (write (1, &str[i], 1) != 1)
				return (-1);
			length++;
		}
		i++;
	}
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	element;
	int		length;

	length = 0;
	va_start(element, str);
	length = w_str(str, element, length);
	va_end(element);
	return (length);
}
