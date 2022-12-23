NAME = libft.a


CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

all:	$(NAME)

$(NAME): $(SRC:=.o)
	$(AR) $(NAME) $(SRC:=.o)

bonus:	$(NAME) $(BONUS:=.o)
		$(AR) $(NAME) $(BONUS:=.o)

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(SRC:=.o) $(BONUS:=.o)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re bonus
