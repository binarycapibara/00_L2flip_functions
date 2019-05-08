# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/21 15:52:29 by fjenae            #+#    #+#              #
#    Updated: 2019/05/08 23:52:36 by fjenae           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c \
ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c

INCLUDES = -I.

FLAGS = -Wall -Werror -Wextra

OBJECTS = $(SOURCES:.c=.o)

NAME = libft.a

all: $(NAME)
$(NAME):
	gcc -c $(FLAGS) $(SOURCES) $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all
