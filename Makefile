##
## EPITECH PROJECT, 2018
## nts
## File description:
## nts
##

CC	=	g++

CXXFLAGS  =	-pedantic -W -Wall -Wall -Wextra -std=c++14 -Iinclude/ -g3

LXXFLAGS	=

NAME	=	nanotekspice

RM	=	rm -f

SRCDIR	=	src

SRC	=	main.cpp					\
		Compute.cpp					\
		Exceptions/NtsException.cpp			\
		Exceptions/ParserException.cpp			\
		Exceptions/ComponentManagerException.cpp	\
		Exceptions/ComponentException.cpp		\
		Components/ComponentManager.cpp			\
		Components/Component.cpp			\
		Components/ComponentChipset.cpp			\
		Components/ComponentSpecial.cpp			\
		Components/Component2716.cpp			\
		Components/Component4001.cpp			\
		Components/Component4008.cpp			\
		Components/Component4011.cpp			\
		Components/Component4013.cpp			\
		Components/Component4017.cpp			\
		Components/Component4030.cpp			\
		Components/Component4040.cpp			\
		Components/Component4069.cpp			\
		Components/Component4071.cpp			\
		Components/Component4081.cpp			\
		Components/Component4094.cpp			\
		Components/Component4514.cpp			\
		Components/Component4801.cpp			\
		Components/ComponentInput.cpp			\
		Components/ComponentClock.cpp			\
		Components/ComponentTrue.cpp			\
		Components/ComponentFalse.cpp			\
		Components/ComponentOutput.cpp

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
