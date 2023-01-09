# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 13:33:55 by abenmous          #+#    #+#              #
#    Updated: 2023/01/09 15:50:57 by abenmous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= so_long

CC=	cc

SRCS =	ft_strjoin.c \
		get_next_line.c \
		get_next_line_utils.c \
		ft_strlen.c \
		ft_split.c \
		long.c \
		so_long.c \
		ft_bzero.c \
		ft_calloc.c \
		put_image.c 

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
	rm -rf *.gch

re : fclean all

