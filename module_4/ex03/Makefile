# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 15:06:58 by amarchal          #+#    #+#              #
#    Updated: 2022/08/18 10:50:42 by amarchal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Materia

SRCS := 	main.cpp				\
			AMateria.cpp			\
			Ice.cpp					\
			Cure.cpp				\
			Character.cpp			\
			MateriaSource.cpp		\
		
INCLUDES :=	AMateria.hpp		\
			Ice.hpp				\
			Cure.hpp			\
			ICharacter.hpp		\
			Character.hpp		\
			MateriaSource.hpp	\
			
OBJS := $(SRCS:.cpp=.o)

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS) $(INCLUDES) Makefile
		$(CC) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re