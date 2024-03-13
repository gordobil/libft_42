# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 16:12:44 by ngordobi          #+#    #+#              #
#    Updated: 2024/01/28 18:14:41 by ngordobi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
REMOVE = rm -f
LIBRARY = ar rc

SOURCES = ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		  ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c \
		  ft_strnstr.c ft_strchr.c ft_strrchr.c ft_memset.c ft_memcpy.c \
		  ft_memmove.c ft_toupper.c ft_tolower.c ft_memchr.c ft_memcmp.c \
		  ft_bzero.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		  ft_itoa.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_split.c \

BONUS_SOURCES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstiter_bonus.c \
				ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c \

OBJECTS = $(SOURCES:.c=.o)
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDE)
	$(LIBRARY) $(NAME) $(OBJECTS)

bonus: $(BONUS_OBJECTS) $(OBJECTS) $(INCLUDE)
	$(LIBRARY) $(NAME) $(BONUS_OBJECTS) $(OBJECTS)

$(OBJECTS): $(SOURCES)
	$(CC) $(CCFLAGS) -c $(SOURCES)

$(BONUS_OBJECTS): $(BONUS_SOURCES)
	$(CC) $(CCFLAGS) -c $(BONUS_SOURCES)

clean:
	$(REMOVE) $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all
.PHONY: all clean fclean re bonus
