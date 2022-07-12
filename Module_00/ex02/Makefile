# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 18:27:32 by bregneau          #+#    #+#              #
#    Updated: 2022/07/11 18:32:54 by bregneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	test

INC				=	-I .

SRC				=	tests.cpp \
					Account.cpp

OBJ				=	$(SRC:.cpp=.o)

CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98 $(INC)

all:				$(NAME)

%.o:				%.cpp
					$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME):			$(OBJ)
					$(CXX) $(OBJ) -o $@

clean:				
					rm -rf $(OBJ)

fclean:				clean
					rm -f $(NAME)

re:					fclean
					make all

.PHONY:				all clean fclean re