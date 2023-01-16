# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 17:21:54 by festeve-          #+#    #+#              #
#    Updated: 2023/01/16 09:57:09 by festeve-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC  = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
   		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c
#		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
#		ft_putendl_fd.c ft_putnbr_fd.c

OBJ	= $(SRC:.c=.o)

CC	= gcc
AR	= ar rcs
RM	= rm -f
CFLAGS	= -Wall -Werror -Wextra

NAME	= libft.a

#.RECIPEPREFIX = >

all:	$(NAME)

$(OBJ):	%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $^
	@echo "all you need is done"
clean:
	$(RM) $(OBJ)
	@echo "clean done"

fclean:	clean
	$(RM)  $(NAME)
	@echo "fclean done"

re:	fclean $(NAME)

.PHONY: all clean fclean re
