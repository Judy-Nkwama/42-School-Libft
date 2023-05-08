
NAME=libft.a

CC=gcc
REMOVE=rm -rf
FLAGS=-Wall -Wextra -Werror

SOURCES=ft_isalpha.c ft_isdigit.c is_alnum.c

OBJECTS=${SOURCES:.c=.o}

.c.o:
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

${NAME}:
	ar rcs ${NAME} ${OBJECTS}

archive: ${NAME}
	rm test.o

compile: archive
	$(CC) $(FLAGS) test.c

all: ${NAME}
	./a.out

$(CC_TEST): 
	$(CC) $(FLAGS) test.c

clean:
	${REMOVE} ${OBJECTS}

fclean:	clean
		${REMOVE} ${NAME}
