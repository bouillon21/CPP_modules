NAME		=	megaphone

SRCS		=	megaphone.cpp

OBJS		= ${SRCS:.cpp=.o}

INCLUDE		=	

CC			= clang++

RM			= rm -f

CPPFLAGS		= -Wall -Wextra -Werror 

.PHONY:			all clean fclean re

$(NAME):		${OBJS} ${INCLUDE}
				${CC} ${OBJS} -o $(NAME)

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all