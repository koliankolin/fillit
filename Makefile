# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djon-con <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/28 20:24:55 by djon-con          #+#    #+#              #
#    Updated: 2019/01/21 19:54:53 by djon-con         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRC = main.c exits.c figs.c ft_add_norm.c ft_board_init.c ft_tetfree.c \
	  read_figs.c recursive_shit.c
OBJ = $(SRC:.c=.o)
HEADER = fillit.h libft/includes/libft.h libft/includes/get_next_line.h
HEADER_PATH = libft/includes
LIB = libft/libft.a

all: $(NAME)

$(NAME): $(LIB) $(HEADER) $(SRC) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIB) -I$(HEADER_PATH)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -I$(HEADER_PATH) -o $@

$(LIB):
	make re -C libft

clean:
	rm -f *.o
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

re: fclean all
