NAME	=	pipex

SRCS	=	pipex.c \
			pipex_split.c \
			pipex_libft.c \
			pipex_utils.c \
			pipex_erros.c \

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

all: $(NAME)

$(NAME):	${OBJS}
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY: all, clean, fclean, re
