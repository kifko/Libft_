# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 17:21:54 by festeve-          #+#    #+#              #
#    Updated: 2022/12/19 13:05:14 by festeve-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS  = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
   		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_atoi.c 

		#$(shell find . -name "*.c")

OBJS   = $(SRCS:.c=.o)

CC     = gcc
RM	   = rm -f
CFLAGS = -Wall -Werror -Wextra

NAME  = libft.a

all:     $(NAME)

$(NAME): $(OBJS)
	     ar rcs $(NAME) $(OBJS)
	     echo "All done!"
clean:
	     $(RM) $(OBJS)
		 echo "All clean"

fclean:  clean
	     $(RM)  $(NAME)
	     echo "fclean done, all removed!"

re:      fclean $(NAME)

.PHONY: all clean fclean re
