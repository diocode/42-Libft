CC = cc
FLAGS = -Wall -Wextra -Werror -I.

SRC = ${filter-out ${wildcard *_bonus.c}, ${wildcard *.c}}

OBJ = ${SRC:.c=.o}

BONUS = ${wildcard *_bonus.c}

BONUS_OBJ = ${BONUS:.c=.o}

NAME = libft.a

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}
	ranlib ${NAME}

clean:
	rm -rf ${OBJ} ${BONUS_OBJ}

fclean: clean
	rm -rf ${NAME}

bonus: ${OBJ} ${BONUS_OBJ}
	ar rcs ${NAME} ${OBJ} ${BONUS_OBJ}
	ranlib ${NAME}

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(OBJ) $(BONUS_OBJ)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BONUS_OBJ)