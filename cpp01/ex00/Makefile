# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 17:49:56 by hmokhtar          #+#    #+#              #
#    Updated: 2022/12/30 17:49:56 by hmokhtar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

INC = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(INC)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re