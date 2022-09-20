# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 15:06:58 by amarchal          #+#    #+#              #
#    Updated: 2022/09/19 16:13:30 by amarchal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		:= Animals
CC 			:= c++
CFLAGS	 	:= -Wall -Wextra -Werror -std=c++98

DIR_SRCS	:= ./srcs
DIR_OBJS	:= ./objs
DIR_INCS	:= ./incs

LST_SRCS	:=	main.cpp		\
				Animal.cpp		\
				Dog.cpp			\
				Cat.cpp			\
				WrongAnimal.cpp	\
				WrongCat.cpp	\
				Brain.cpp		\
		
LST_INCS	:=	Animal.hpp		\
				Dog.hpp			\
				Cat.hpp			\
				WrongAnimal.hpp	\
				WrongCat.hpp	\
				Brain.hpp		\
			
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