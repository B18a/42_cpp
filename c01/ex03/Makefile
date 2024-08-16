# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/16 13:54:39 by ajehle            #+#    #+#              #
#    Updated: 2024/08/16 13:54:45 by ajehle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -Wpedantic
NAME		= violence
OBJ_DIR		= obj
SRC_DIR		= src
INC_DIR		= include
REMOVE		= rm -rf

# INTERNAL FUNCTIONS
FUNCTIONS	=	$(SRC_DIR)/main.cpp \
				$(SRC_DIR)/Weapon.cpp \
				$(SRC_DIR)/HumanA.cpp \
				$(SRC_DIR)/HumanB.cpp

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

re : fclean all

.PHONY : all clean fclean re
