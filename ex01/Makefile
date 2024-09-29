# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/29 19:55:22 by mstrauss          #+#    #+#              #
#    Updated: 2024/09/29 20:08:41 by mstrauss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombieHorde

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++17 -stdlib=libc++
INC			=   -I$(CURDIR)

SRC 		=	main.cpp\
                Zombie.cpp\
                zombieHorde.cpp
                
HEADER		=	Zombie.hpp

OBJ_DIR		=	./obj
OBJ 		= $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.cpp=.o)))

RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re