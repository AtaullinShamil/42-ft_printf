# **************************************************************************** #
#                                                                              #
#    Makefile                                                                  #
#                                                                              #
#    By: Ataullin Shamil                                                       #
#                                                                              #
#    Created: 2021/12/11                                                       #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h
FLAGS = -Wall -Werror -Wextra
CC = gcc

LIST =	ft_char.c\
		ft_decimal.c\
		ft_hexadecimal.c\
		ft_pointer.c\
		ft_printf.c\

OBJ = $(LIST:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER) Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(OBJ_B)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
