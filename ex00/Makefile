# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/07 14:12:40 by ajehle            #+#    #+#              #
#    Updated: 2024/08/07 14:18:34 by ajehle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME		= megaphone
OBJ_DIR		= obj
SRC_DIR		= src
INC_DIR		= include
REMOVE		= rm -rf


# INTERNAL FUNCTIONS
FUNCTIONS	=	$(SRC_DIR)/megaphone.cpp

# INTERNAL OBJECT
OBJECTS		= $(addprefix $(OBJ_DIR)/, $(notdir $(FUNCTIONS:.cpp=.o)))

all : $(NAME)

# INTERNAL RULE
$(NAME) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)

# DIRECTORY
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	$(REMOVE) $(OBJECTS)
	$(REMOVE) $(OBJ_DIR)

fclean : clean
	$(REMOVE) $(NAME)
#	$(REMOVE) $(OBJ_DIR)

re : fclean all

.PHONY : all clean fclean re
