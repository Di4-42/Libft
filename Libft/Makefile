# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diahussa <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 16:52:58 by diahussa          #+#    #+#              #
#    Updated: 2024/10/17 22:22:31 by diahussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a


CC = gcc
FLAGS = -Wall -Wextra -Werror


FILES = ft_strlcpy.c ft_strlen.c ft_memcpy.c ft_memset.c ft_bzero.c ft_memmove.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_putnbr_fd.c \
		ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c \
		ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strmapi.c \

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
