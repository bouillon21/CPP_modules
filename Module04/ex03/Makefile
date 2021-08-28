NAME = a.out

CLANG = clang++ -Wall -Werror

SRC =	AMateria.cpp  \
		Character.cpp \
		Cure.cpp \
		ICharacter.cpp \
		IMateriaSource.cpp \
		Ice.cpp \
		MateriaSource.cpp \
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