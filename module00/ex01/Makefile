NAME = phonebook

CC = g++

CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRCS = phonebook.cpp \
	contact.cpp \
	main.cpp

OBJ = $(SRCS:.cpp=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "phonebook compiled"

all: $(NAME)

clean:
	@rm -rf $(OBJ)
	@echo "Phonebook is clean"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

#.SILENT: