##
## EPITECH PROJECT, 2021
## d10
## File description:
## 

OBJ = $(SRCS_C:.c=.o)

LIB = -L./lib/my -lmy

SRC		=	 sources/

SRC_C	=	my_printf.c			\
			do_op.c				\
			functions_E_to_x.c	\
			functions_s_to_e.c	\
			functions_X_to_o.c	\
			main.c				\
			my_put_nbr.c		\
			my_putstr.c			\
			my_putchar.c

SRCS_C	= 	$(addprefix $(SRC), $(SRC_C))

CFLAGS = -I./includes

NAME = print

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my/
	gcc $(CFLAGS) -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean