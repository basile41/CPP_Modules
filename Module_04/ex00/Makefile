# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 14:08:58 by bregneau          #+#    #+#              #
#    Updated: 2022/07/21 16:59:30 by bregneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	a.out

INC				=	-I .

SRC_PATH		=	./
OBJ_PATH		=	./obj/

OBJ_DIRS		=	$(OBJ_PATH)

SRC				=	main.cpp \
					Animal.cpp \
					Dog.cpp \
					Cat.cpp

OBJ				=	$(addprefix $(OBJ_PATH),$(SRC:.cpp=.o))
DEPS			=	$(addprefix $(OBJ_PATH),$(SRC:.cpp=.d))

CXX				=	c++
CXXFLAGS		=	-MMD -Wall -Wextra -Werror -std=c++98

all:				$(NAME)

$(OBJ_DIRS):
					@mkdir -p $(OBJ_DIRS)
					
$(OBJ_PATH)%.o:		$(SRC_PATH)%.cpp
					$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

$(NAME):			$(OBJ_DIRS) $(OBJ)
					$(CXX) $(OBJ) -o $@

clean:				
					rm -rf $(OBJ_PATH)

fclean:				clean
					rm -f $(NAME)

re:					fclean
					make all
					
-include			$(DEPS)

.PHONY:				all clean fclean re
