# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 15:06:58 by amarchal          #+#    #+#              #
#    Updated: 2022/09/20 11:48:49 by amarchal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		:= Materias
CC 			:= c++
CFLAGS	 	:= -Wall -Wextra -Werror -std=c++98

DIR_SRCS	:= ./srcs
DIR_OBJS	:= ./objs
DIR_INCS	:= ./incs

LST_SRCS	:=	main.cpp			\
				Character.cpp		\
				AMateria.cpp		\
				Cure.cpp			\
				Ice.cpp				\
				MateriaSource.cpp	\
		
LST_INCS	:=	ICharacter.hpp		\
				Character.hpp		\
				AMateria.hpp		\
				Cure.hpp			\
				Ice.hpp				\
				IMateriaSource.hpp	\
				MateriaSource.hpp	\
			
LST_OBJS := $(LST_SRCS:.cpp=.o)

SRCS := $(addprefix $(DIR_SRCS)/, $(LST_SRCS))
OBJS := $(addprefix $(DIR_OBJS)/, $(LST_OBJS))
INCS := $(addprefix $(DIR_INCS)/, $(LST_INCS))

all : $(NAME)

$(NAME) : $(OBJS) $(INCLUDES) Makefile
		$(CC) $(OBJS) -o $(NAME)

$(DIR_OBJS):
		mkdir -p $(DIR_OBJS)

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.cpp $(INCS) Makefile | $(DIR_OBJS)
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJS)
		rm -rf $(DIR_OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re