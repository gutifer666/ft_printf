/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:42:31 by frgutier          #+#    #+#             */
/*   Updated: 2022/10/23 18:48:20 by frgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	checker(char c, va_list argument)
{
	if (c == 'c')
		return (print_char(va_arg(argument, int)));
	if (c == 's')
		return (print_string(va_arg(argument, char *)));
	if (c == 'p')
		return (print_hexa_pointer(va_arg(argument, void *)));
	if (c == 'd' || c == 'i')
		return (print_number(va_arg(argument, int)));
	if (c == 'u')
		return (print_number_unsigned(va_arg(argument, unsigned int)));
	if (c == 'x')
		return (print_hexa_lower(va_arg(argument, int)));
	if (c == 'X')
		return (print_hexa_capital(va_arg(argument, int)));
	return (0);
}

static int	write_str_percent(char c, va_list argument)
{
	int	length;

	length = 0;
	if (c != '%')
	{
		length = checker(c, argument);
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

static	int	write_str(const char *str, va_list argument, int length)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			length = length + write_str_percent(str[i + 1], argument);
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
	va_list	argument;
	int		length;

	length = 0;
	va_start(argument, str);
	length = write_str(str, argument, length);
	va_end(argument);
	return (length);
}
