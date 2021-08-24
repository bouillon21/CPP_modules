NAME		=	ex00

SRCS		=	main.cpp ClapTrap.cpp

OBJS		= ${SRCS:.cpp=.o}

INCLUDE		=	ClapTrap.h

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