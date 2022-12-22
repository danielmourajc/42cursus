NAME	=	libft.a

SRCS	=	ft_atoi \
			ft_bzero \
			ft_calloc \
			ft_isalnum \
			ft_isalpha \
			ft_isascii \
			ft_isdigit \
			ft_isprint \
			ft_itoa \
			ft_memchr \
			ft_memcmp \
			ft_memcpy \
			ft_memmove \
			ft_memset \
			ft_putchar_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_putstr_fd \
			ft_split \
			ft_strchr \
			ft_strdup \
			ft_striteri \
			ft_strjoin \
			ft_strlcat \
			ft_strlcpy \
			ft_strlen \
			ft_strmapi \
			ft_strncmp \
			ft_strnstr \
			ft_strrchr \
			ft_strtrim \
			ft_substr \
			ft_tolower \
			ft_toupper

BONUS	=	ft_lstadd_back \
			ft_lstadd_front \
			ft_lstclear \
			ft_lstdelone \
			ft_lstiter \
			ft_lstlast \
			ft_lstmap \
			ft_lstnew \
			ft_lstsize

OBJS	=	$(SRCS:%.c=%.o)

OBJS_B	=	$(BONUS:%.c=%.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -f

AR		=	ar rcs

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus:	$(NAME) $(OBJS_B)
	$(AR) $(NAME) $(OBJS_B)

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus
