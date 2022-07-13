# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 13:16:41 by bregneau          #+#    #+#              #
#    Updated: 2022/07/13 13:18:55 by bregneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	BraiiiiiiinnnzzzZ

INC				=	-I .

SRC				=	main.cpp \
					Zombie.cpp \
					newZombie.cpp \
					randomChump.cpp

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