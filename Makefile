# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 11:03:12 by omontero          #+#    #+#              #
#    Updated: 2022/12/29 10:10:16 by pecampos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT_A = libft.a
LIBF_DIR = libft/
LIBFT  = $(addprefix $(LIBF_DIR), $(LIBFT_A))

SRC = comprobar.c ft_atoi.c push_swap.c push.c reverse.c rotate.c stack_creator.c swap.c seleccionador.c

OBJ = $(SRC:.c=.o)

RM = rm -f

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INCLUDE = -framework OpenGL -framework AppKit


all:			$(NAME)

$(NAME):  $(OBJ)			
				@gcc $(FLAGS) $(OBJ) $(INCLUDE) -o $(NAME)
				@rm $(OBJ)

$(OBJ): $(SRC)
				@gcc $(FLAGS) -c $(SRC)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

exe: all
	@./$(NAME)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
	
.PHONY:			all clean fclean re bonus