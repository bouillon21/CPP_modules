NAME		=	account

SRCS		=	Account.cpp tests.cpp

OBJS		= ${SRCS:.cpp=.o}

INCLUDE		=	Account.hpp

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