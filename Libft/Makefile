# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diahussa <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 16:52:58 by diahussa          #+#    #+#              #
#    Updated: 2024/10/13 20:24:31 by diahussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a


CC = gcc
FLAGS = -Wall -Wextra -Werror


FILES = ft_strlcpy.c ft_strlen.c ft_memcpy.c ft_memset.c ft_bzero.c ft_memmove.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlcat.c

REPLACE = $(FILES:.c=.o)


all: $(NAME)


$(NAME): $(REPLACE)
	ar rcs $(NAME) $(REPLACE)


%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@


clean:
	rm -f $(REPLACE)


fclean: clean
	rm -f $(NAME)

re: fclean all
