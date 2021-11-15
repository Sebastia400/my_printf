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
			functions_e_to_x.c	\
			functions_s_to_e.c	\
			functions_x_to_o.c	\
			functions_4.c		\
			main.c				\
			my_put_nbr.c		\
			my_putstr.c			\
			my_putchar.c		\
			my_revstr.c

SRCS_C	= 	$(addprefix $(SRC), $(SRC_C))

CFLAGS = -I./includes

NAME = print

all: $(NAME)

$(NAME): $(OBJ)
	gcc -W -Werror -Wextra -Wall $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean