NAME = fixed0

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Fixed.cpp \
	main.cpp

OBJ_DIR = obj/

OBJ	:=	$(addprefix $(OBJ_DIR),${SRC:.cpp=.o})

$(OBJ_DIR)%.o:	%.cpp
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