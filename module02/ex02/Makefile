NAME = fixed2

CC = c++

CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRCS = Fixed.cpp \
	main.cpp

OBJ = $(SRCS:.cpp=.o)

OBJ_path = obj/

OBJ_PREFIXED	= $(addprefix $(OBJ_PATH), $(OBJ))

$(OBJ_PATH)%.o: $(SRCS)%.cpp
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -cpp $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ_PREFIXED) -o $(NAME)
	@echo "$(NAME) compiled"

all: $(NAME)

clean:
	@rm -rf $(OBJ)
	@echo "Fixed is clean"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

#.SILENT: