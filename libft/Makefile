# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkhoali <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/05 02:52:55 by pkhoali           #+#    #+#              #
#    Updated: 2018/06/11 17:06:45 by pkhoali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -c -Wall -Werror -Wextra

CC = gcc

SRC = 	ft_memalloc.c\
		ft_putendl.c\
		ft_strcpy.c\
		ft_strmapi.c\
		ft_strsub.c\
		ft_memccpy.c\
		ft_putendl_fd.c\
		ft_strdel.c\
		ft_strncat.c\
		ft_strtrim.c\
		ft_atoi.c\
		ft_memchr.c\
		ft_putnbr.c\
		ft_strdup.c\
		ft_strncmp.c\
		ft_tolower.c\
		ft_bzero.c\
		ft_memcmp.c\
		ft_putnbr_fd.c\
		ft_strequ.c\
		ft_strncpy.c\
		ft_toupper.c\
		ft_isalnum.c\
		ft_memcpy.c\
		ft_putstr.c\
		ft_striter.c\
		ft_strnequ.c\
		ft_isalpha.c\
		ft_memdel.c\
		ft_putstr_fd.c\
		ft_striteri.c\
		ft_strnew.c\
		ft_isascii.c\
		ft_memmove.c\
		ft_strcat.c\
		ft_strjoin.c\
		ft_strnstr.c\
		ft_isdigit.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strrchr.c\
		ft_isprint.c\
		ft_putchar.c\
		ft_strclr.c\
		ft_strlen.c\
		ft_strsplit.c\
		ft_itoa.c\
		ft_putchar_fd.c\
		ft_strcmp.c\
		ft_strmap.c\
		ft_strstr.c\
		ft_count_words.c\
		ft_next_word.c\
		ft_cleanup.c\
		ft_word_len.c\
		ft_num_words.c\
		ft_splitstr.c\

		
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) compiled"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re
