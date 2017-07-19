# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/13 09:15:16 by mtrudel           #+#    #+#              #
#    Updated: 2017/06/19 22:23:33 by mtrudel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ---------------------------------------------------------------------------- #

NAME = fdf

# ---------------------------------------------------------------------------- #
HEADER = fdf.h
MLX = -lmlx -framework OpenGL -framework AppKit
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJECTS = fdf.o ft_usage.o parsing.o key_function.o print_image.o
SRCS = fdf.c ft_usage.c parsing.c key_function.c print_image.c

.PHONY: clean fclean re all

$(NAME): $(OBJECTS)
	make -C libft/
	$(CC) $(CFLAGS) -c -I $(SRCS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) -lft -Llibft $(MLX)
clean:
	make clean -C libft/
	rm -rf $(OBJECTS)
fclean: clean
	make clean -C libft/
	rm -rf $(NAME)
re: fclean all
	make re -C libft/
all: $(NAME)
