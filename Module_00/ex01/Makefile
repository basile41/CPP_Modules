# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 10:34:39 by bregneau          #+#    #+#              #
#    Updated: 2022/07/04 15:49:32 by bregneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook

INC				=	-I .

SRC				=	main.cpp \
					PhoneBook.cpp \
					Contact.cpp

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