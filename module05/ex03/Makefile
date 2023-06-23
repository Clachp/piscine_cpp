NAME = Intern

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = src/

#HEADER_DIR = inc/

OBJ_DIR = obj/

SRC = Bureaucrat.cpp \
	A_Form.cpp \
	Intern.cpp \
	RobotomyRequestForm.cpp \
	ShrubberyCreationForm.cpp \
	PresidentialPardonForm.cpp \
	main.cpp

OBJ	:=	$(addprefix $(OBJ_DIR),${SRC:.cpp=.o})

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
			@mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) -c $< -o $@
			

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(NAME) compiled"

all: $(OBJ) $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@rm *_shrubbery
	@echo "$(NAME) is clean"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

#.SILENT: