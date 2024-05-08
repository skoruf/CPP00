CC = c++
NAME= PhoneBook
SRC = main.cpp PhoneBook.cpp Contact.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@
all: $(NAME)

$(NAME): $(OBJ)
	@echo "\e[1;34m compiling cpp files \e[0m"
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	@echo "\e[0;36m cleaning obj files \e[0m"
	@rm -rf *.o

fclean: clean
	@echo "\e[1;36m cleaning obj files and binary \e[0m"
	@rm -rf $(NAME)
re: fclean all

.PHONY: clean fclean re
