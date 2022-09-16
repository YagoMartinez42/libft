SRCS	= libft.h *.c

CC 		= cc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra
NAME	= libft.a

all:
			${CC} ${CFLAGS} ${SRCS}
			mv a.out ${NAME}
fclean:
			${RM} ${NAME}
re:			fclean all
.PHONY:		all fclean
