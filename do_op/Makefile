##
## EPITECH PROJECT, 2021
## d10
## File description:
## 

SRC	=	rush3.c\
		do_op.c\
		rush31.c

OBJ	= 	$(SRC:.c=.o) ##Quitar los .c

NAME	=	rush3  ##Nombre archivo

all:	$(NAME)

$(NAME):	$(OBJ)
		cd ./lib/my/ ; $(MAKE) -f Makefile
		gcc  -W -Wall -Wextra -Werror -o $(NAME) $(OBJ) -I./include -L./lib/my -lmy
clean:
	rm -f $(OBJ)
	cd ./lib/my ; $(MAKE) -f Makefile clean

fclean: clean
	rm -f $(NAME)
	cd ./lib/my ; $(MAKE) -f Makefile fclean

re:	fclean all
	cd ./lib/my ; $(MAKE) -f Makefile re
