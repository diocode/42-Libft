# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: digoncal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 11:15:11 by digoncal          #+#    #+#              #
#    Updated: 2022/11/15 12:09:27 by digoncal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror -I.
DEPS = libft.h

SRC = $(filter-out $(shell find -type f -name '*_bonus.c'), $(shell find -type f -name '*.c'))
OBJ = $(SRC:.c=.o)

BONUS = $(shell find -type f -name '*_bonus.c')
BONUS_OBJ = $(BONUS:.c=.o)

NAME = libft.a

all: $(NAME)
$(NAME): $(OBJ) $(DEPS)
	@ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ) $(DEPS)
	@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
	@rm -rf $(OBJ) $(BONUS_OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
