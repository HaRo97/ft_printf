# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 13:15:41 by hrochd            #+#    #+#              #
#    Updated: 2024/02/24 15:39:26 by hrochd           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCS = ft_inttohex.c ft_printf.c ft_put_address.c ft_putchar.c ft_putnbr.c ft_putstr.c

OFILES = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = cc

RM = rm -f

all : $(NAME)

$(NAME) : $(OFILES)
	ar rsc $(NAME) $(OFILES)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< 

clean :
	$(RM) $(OFILES)

fclean : clean
	$(RM) $(NAME)

re : fclean all