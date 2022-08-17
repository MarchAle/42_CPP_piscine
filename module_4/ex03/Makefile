# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 15:06:58 by amarchal          #+#    #+#              #
#    Updated: 2022/08/17 11:04:54 by amarchal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Materia

SRCS := 	main.cpp				\
			AMateria.cpp			\
			IceMateria.cpp			\
			CureMateria.cpp			\
			Character.cpp			\
			MateriaSource.cpp		\
		
INCLUDES :=	AMateria.hpp		\
			IceMateria.hpp		\
			CureMateria.hpp		\
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