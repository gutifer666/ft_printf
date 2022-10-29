# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frgutier <frgutier@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 13:15:26 by frgutier          #+#    #+#              #
#    Updated: 2022/10/29 09:42:42 by frgutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c \
			print_char.c \
			print_number.c \
			print_number_unsigned.c \
			print_hexa_pointer.c \
			print_string.c \
			print_hexa_lower.c \
			print_hexa_capital.c \
			aux_functions.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

.c.o:		ft_printf.h
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re