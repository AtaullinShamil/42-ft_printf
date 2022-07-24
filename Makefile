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

LIST =	ft_char.c\
		ft_decimal.c\
		ft_hexadecimal.c\
		ft_pointer.c\
		main.c\

OBJ = $(patsubst %.c, %.o, $(LIST))

HEADER = ft_printf.h
FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER) Makefile
	gcc $(FLAGS) -c $< -o $@

bonus:
	@make OBJ="$(OBJ_B)" all

clean:
	@rm -f $(OBJ) $(OBJ_B)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus
