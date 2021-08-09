NAME		=	phonebook

SRCS		=	PhoneBook.cpp main.cpp

OBJS		= ${SRCS:.cpp=.o}

INCLUDE		=	PhoneBook.hpp

CC			= clang++

RM			= rm -f

CPPFLAGS		= -Wall -Wextra -Werror

.PHONY:			all clean fclean re

$(NAME):		${OBJS} ${INCLUDE}
				${CC} -I .${INCLUDE} ${OBJS} -o $(NAME)

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all