/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:22:54 by frgutier          #+#    #+#             */
/*   Updated: 2022/10/20 08:31:06 by frgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int				print_char(int c);
int				print_number(int n);
int				print_string(char *s);
int				ft_printf(const	char *str, ...);
unsigned int	print_number_unsigned(unsigned int num);
int				print_hexa_pointer(void *p);
int				ft_strlen(char *s);
int				print_hexa_lower(int num);
int				print_hexa_capital(int num);
int				puthexa_long(char *bstr, unsigned long long n, int c);
int				puthexa_uns(char *bstr, unsigned int n, int c);
#endif