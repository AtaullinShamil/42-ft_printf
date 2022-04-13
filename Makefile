# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntojamur <ntojamur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 01:20:10 by ntojamur          #+#    #+#              #
#    Updated: 2021/12/13 22:47:50 by ntojamur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

LIST =	ft_charus.c\
		ft_decimal.c\
		ft_hexadecimal.c\
		ft_pointer.c\
		ft_printf.c\

OBJ = $(patsubst %.c, %.o, $(LIST))

HEADER = ft_printf.h
FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

bonus:
	@make OBJ="$(OBJ_B)" all

clean:
	@rm -f $(OBJ) $(OBJ_B)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus
