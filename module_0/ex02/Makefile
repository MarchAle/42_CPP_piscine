# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 15:06:58 by amarchal          #+#    #+#              #
#    Updated: 2022/08/23 14:45:57 by amarchal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := tests

SRCS := Account.cpp		\
		tests.cpp		\
		
INCLUDES := Account.hpp
			
OBJS := $(SRCS:.cpp=.o)

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS) Makefile
		$(CC) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)
		rm -rf cmp*
		rm -rf *cut

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re