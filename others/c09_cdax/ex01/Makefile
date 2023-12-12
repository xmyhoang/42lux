SRC = 	./srcs/ft_putchar.c \
		./srcs/ft_swap.c \
		./srcs/ft_putstr.c \
 		./srcs/ft_strlen.c \
		./srcs/ft_strcmp.c

OBJS = ${SRC:.c=.o}

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

.c.o:
	cc  ${FLAGS} -c -I ./includes/ $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:  
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
