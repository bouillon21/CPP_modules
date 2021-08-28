NAME = ex01
CLANG = clang++ -Wall -Wextra -Werror

SRC =	Animal.cpp  \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CLANG) -c $< -o $@

$(NAME): $(OBJ)
	$(CLANG) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all