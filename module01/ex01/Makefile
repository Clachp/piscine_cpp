NAME = zombies

CC = c++

CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRCS = Zombie.cpp \
	main.cpp \
	zombieHorde.cpp

OBJ = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "$(NAME) compiled"

all: $(NAME)

clean:
	@rm -rf $(OBJ)
	@echo "$(NAME) is clean"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

#.SILENT: