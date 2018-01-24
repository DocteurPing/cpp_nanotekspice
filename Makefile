##
## EPITECH PROJECT, 2018
## nts
## File description:
## nts
##

CC	=	g++

CXXFLAGS  =	-pedantic -W -Wall -Wall -Wextra -Iinclude/ -g3

LXXFLAGS	=

NAME	=	nanotekspice

RM	=	rm -f

SRCDIR	=	src

SRC	=	main.cpp

SRC	:=	$(addprefix $(SRCDIR)/, $(SRC))

OBJ	=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME) $(LXXFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(addsuffix ~, $(SRC))

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all libs clean fclean re
