# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/13 09:15:16 by mtrudel           #+#    #+#              #
#    Updated: 2017/03/20 12:03:44 by mtrudel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
HEADER = fdf.h
MLX = -lmlx -framework OpenGL -framework AppKit
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJECTS = fdf.o ft_usage.o parsing.o
SRCS = fdf.c ft_usage.c parsing.c

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -c -I $(SRCS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) $(MLX)
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
all: $(NAME)
.PHONY: clean fclean re all
