# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 11:03:12 by omontero          #+#    #+#              #
#    Updated: 2022/05/23 12:20:54 by pecampos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
		ft_tolower.c ft_toupper.c ft_strdup.c ft_calloc.c ft_strjoin.c ft_strtrim.c ft_split.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_substr.c

OBJS = $(SRC:.c=.o)

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS:.c=.o)

RM = rm -f

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I.

NAME = libft.a

all:			$(NAME)

$(NAME):		
				$(CC) -c $(CFLAGS) $(SRC)
				ar rcs $(NAME) $(OBJS)

bonus:			
				$(CC) -c $(CFLAGS) $(BONUS) $(SRC)
				ar rcs $(NAME) $(BONUS_OBJS) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus
	