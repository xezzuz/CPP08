# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/02 11:17:07 by nazouz            #+#    #+#              #
#    Updated: 2024/09/02 16:56:43 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			Span

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			Span.hpp

SRCS			=			main.cpp Span.cpp

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