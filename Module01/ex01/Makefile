NAME		=	More_brainz!

SRCS		=	Zombie.cpp main.cpp ZombieHorde.cpp

OBJS		= 	${SRCS:.cpp=.o}

INCLUDE		=	Zombie.h

CC			= 	clang++

RM			= 	rm -f

CPPFLAGS	= 	-Wall -Wextra -Werror

.PHONY:			all clean fclean re

$(NAME):		${OBJS} ${INCLUDE}
				${CC} -I .${INCLUDE} ${OBJS} -o $(NAME)

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all