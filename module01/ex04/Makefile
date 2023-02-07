NAME = sed

CC = c++

CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRCS = main.cpp

OBJ = $(SRCS:.cpp=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "$(NAME) compiled"

all: $(NAME)

clean:
	@rm -rf $(OBJ)
	@rm -rf *.replace
	@echo "$(NAME) is clean"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

#.SILENT: