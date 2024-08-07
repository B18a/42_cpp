# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/07 14:12:40 by ajehle            #+#    #+#              #
#    Updated: 2024/08/07 15:41:31 by ajehle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# DIRECTORIES
OBJ_DIR		= obj
SRC_DIR		= src

# COMPILER AND FLAG
CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

# NAME
NAME		= phonebook

# REMOVE
REMOVE		= rm -rf

# INTERNAL FUNCTIONS
FUNCTIONS	=	main.cpp \
				PhoneBook.cpp \
				Contact.cpp


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
