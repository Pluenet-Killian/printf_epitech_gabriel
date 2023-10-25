##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## makefile
##

CC =		gcc

CDFLAGS +=	

NAME =		libmy.a

SRC =		mini_printf.c \
		my_putchar.c \
		my_put_nbr.c \
		my_compute_power_rec.c \
		displays_functions.c \
		my_putstr.c \
		my_put_nbr_base.c \
		my_evil_str.c \
		my_strlen.c \
		my_float.c

OBJ =		$(SRC:.c=.o)

all :		$(NAME)

$(NAME) :	$(OBJ)
		ar rc $(NAME) $(OBJ)
		$(CC) main.c -L./ -lmy

clean :
		rm -rf $(OBJ)
		rm -rf *~
		rm -rf unit_test*

fclean : clean
		rm -rf $(NAME)

re :		fclean all

