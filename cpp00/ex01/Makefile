# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmokhtar <hmokhtar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 12:08:58 by hmokhtar          #+#    #+#              #
#    Updated: 2022/12/29 12:08:58 by hmokhtar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

SRCS = phonebook.cpp

INC = phonebook.hpp

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