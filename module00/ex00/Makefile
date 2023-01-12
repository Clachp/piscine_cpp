NAME = megaphone

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp

OBJ = $(SRCS:.cpp=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "megaphone compiled"

all: $(NAME)

clean:
	@rm -rf $(OBJ)
	@echo "megaphone is clean"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

#.SILENT: