##
## EPITECH PROJECT, 2021
## d10
## File description:
##

SRC		=	 sources/

SRC_C	=	my_printf.c			\
			do_op.c				\
			functions_e_to_x.c	\
			functions_s_to_e.c	\
			functions_x_to_o.c	\
			functions_4.c		\
			my_put_nbr.c		\
			my_putstr.c			\
			my_putchar.c		\
			my_revstr.c

SRCS_C	= 	$(addprefix $(SRC), $(SRC_C))

OBJ	= 	$(SRCS_C:.c=.o) ##Quitar los .c

NAME	=	libmy.a  ##Nombre archivo

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

all:	$(NAME)

copy:   $(COPY)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all