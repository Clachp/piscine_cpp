NAME = Interface

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = src/

//HEADER_DIR = inc/

OBJ_DIR = obj/

SRC = 	Character.cpp \
		Cure.cpp \
		Ice.cpp \
		AMateria.cpp \
		MateriaSource.cpp \
		ICharacter.cpp \
		IMateriaSource.cpp \
		main.cpp 
	
OBJ	:=	$(addprefix $(OBJ_DIR),${SRC:.cpp=.o})

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp
			@mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) -c $< -o $@
			

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(NAME) compiled"

all: $(OBJ) $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(NAME) is clean"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

#.SILENT: