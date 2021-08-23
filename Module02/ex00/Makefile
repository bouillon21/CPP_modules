NAME		=	My-First-Orthodox

SRCS		=	main.cpp Fixed.cpp

OBJS		= ${SRCS:.cpp=.o}

INCLUDE		=	Fixed.hpp

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