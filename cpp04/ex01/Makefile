# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 15:50:42 by hmokhtar          #+#    #+#              #
#    Updated: 2023/02/15 15:50:42 by hmokhtar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = World_on_Fire

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

INC = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS) $(INC)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Compilation ....... [OK]"

%.o: %.cpp $(INC)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re