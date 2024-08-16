# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/09 10:48:57 by ajehle            #+#    #+#              #
#    Updated: 2024/08/16 10:44:04 by ajehle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# DIRECTORIES
OBJ_DIR		= obj
SRC_DIR		= src

# COMPILER AND FLAG
CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -Wpedantic -std=c++98

# NAME
NAME		= account

# REMOVE
REMOVE		= rm -rf

# INTERNAL FUNCTIONS
FUNCTIONS	=	Account.cpp \
				tests.cpp

# SOURCE FILES
SRC_FILES   = $(addprefix $(SRC_DIR)/, $(FUNCTIONS))

# OBJECT FILES
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
