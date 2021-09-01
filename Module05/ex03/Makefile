NAME = ex00

CLANG = clang++ -Wall -Wextra -Werror

SRC =	Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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