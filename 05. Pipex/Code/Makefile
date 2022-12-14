NAME	=	pipex

SRCS	=	split_pipex.c libft_pipex.c utils_pipex.c pipex.c erros_pipex.c

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