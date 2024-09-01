# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/16 13:53:46 by ajehle            #+#    #+#              #
#    Updated: 2024/08/23 15:56:25 by ajehle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CXXFLAGS	= #-Wall -Wextra -Werror #-std=c++98
NAME		= animal
OBJ_DIR		= obj
SRC_DIR		= src
INC_DIR		= include
REMOVE		= rm -rf

# INTERNAL FUNCTIONS
FUNCTIONS	=	$(SRC_DIR)/main.cpp \
				$(SRC_DIR)/Animal.cpp \
				$(SRC_DIR)/Dog.cpp \
				$(SRC_DIR)/Cat.cpp \
				$(SRC_DIR)/WrongAnimal.cpp \
				$(SRC_DIR)/WrongCat.cpp \
				$(SRC_DIR)/Brain.cpp \

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
