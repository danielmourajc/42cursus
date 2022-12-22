NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			ft_putstr.c \
			ft_putptr.c \
			ft_putnbr.c \
			ft_putchar.c \
			ft_putnbr_u.c \
			ft_putnbr_base.c

OBJS	=	$(SRCS:%.c=%.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -f

AR		=	ar rcs

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I ./
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
