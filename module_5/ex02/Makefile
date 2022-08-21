# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarchal <amarchal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 15:06:58 by amarchal          #+#    #+#              #
#    Updated: 2022/08/21 17:16:15 by amarchal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Bureaucrat

SRCS := 	main.cpp					\
			Bureaucrat.cpp				\
			AForm.cpp					\
			ShrubberyCreationForm.cpp	\
			RobotomyRequestForm.cpp		\
			PresidentialPardonForm.cpp	\
		
INCLUDES :=	Bureaucrat.hpp				\
			AForm.hpp					\
			ShrubberyCreationForm.hpp	\
			RobotomyRequestForm.hpp		\
			PresidentialPardonForm.hpp	\
			
OBJS := $(SRCS:.cpp=.o)

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS) $(INCLUDES) Makefile
		$(CC) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)
		rm -rf *_shrubbery

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re