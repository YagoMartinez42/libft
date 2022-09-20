
CC :=	gcc
DEPS :=	libft.h
OBJ	:=	ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o \
		ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_memchr.o \
		ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_split.o \
		ft_strchr.o ft_strdup.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o \
		ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strnstr.o ft_strrchr.o \
		ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o test_lib.o
RM :=	rm -f
CFLAGS :=	-Wall -Werror -Wextra
NAME :=	libft.a

%.o:	%.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)
$(NAME):	$(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)
.PHONY:	all clean fclean
clean:
		rm $(NAME)
fclean:
		$(RM) $(NAME)
re:	all clean fclean
