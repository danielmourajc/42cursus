# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/18 19:29:58 by dmoura-d          #+#    #+#              #
#    Updated: 2022/05/07 17:52:40 by dmoura-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c ft_putchar.c ft_putstr.c ft_putptr.c\
			ft_putnbr.c ft_putnbr_u.c ft_putnbr_base.c

OBJS	=	${SRCS:%.c=%.o}

AR		=	ar rcs

RM		=	rm -f

FLAGS	=	-Wall -Werror -Wextra

all:	$(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I ./
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
