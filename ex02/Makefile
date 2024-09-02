# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/02 19:34:09 by nazouz            #+#    #+#              #
#    Updated: 2024/09/02 19:34:44 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			MutantStack

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			MutantStack.hpp

SRCS			=			main.cpp

OBJS			=			$(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp $(INCLUDES)
	$(CPP) -c $(CPPFLAGS) $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all