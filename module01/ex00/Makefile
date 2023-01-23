NAME = zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRCS = Zombie.cpp \
	main.cpp

OBJ = $(SRCS:.cpp=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Zombie compiled"

all: $(NAME)

clean:
	@rm -rf $(OBJ)
	@echo "Zombie is clean"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

#.SILENT: