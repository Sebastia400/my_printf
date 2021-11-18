##
## EPITECH PROJECT, 2021
## dio
## File description:
## makefile 
## 

OBJ = $(SRC:.c=.o)

LIB = -L./lib/my -lmy


SRC	= 	main.c\
		function_e.c

CFLAGS = -I./include

NAME = print

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my/
	gcc $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean