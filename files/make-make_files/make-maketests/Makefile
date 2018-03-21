##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Desc
##

#Répertoire des libs
LIB_DIR=	$(realpath ../lib/my)

#Répertoire des includes
INC_DIR=	$(realpath ../include)

#Fichiers sources
SRC=		$(wildcard ../src/*.c)	\
		tests.c

#Libs à inclure
LIB=		my

#Fichiers objets (relicats de compilation)
OBJ=		$(SRC:.c=.o)

#Nom du projet
NAME=		PROJECTNAME_tests

#Arguments gcc
CFLAGS=		-L$(LIB_DIR) -l$(LIB) -I$(INC_DIR) -lcriterion -coverage

all:		$(NAME)

$(NAME):
		make -C ../lib/my
		make clean -C ../lib/my
		gcc -o $(NAME) $(SRC) $(CFLAGS)

tests_run:	$(NAME)
		cp ../*.gc*
		cp -rf ../$(NAME)

fclean:
		rm -rf ../*.gc*
		rm -rf ../$(NAME)
		rm -rf ./*.gc*
		rm -rf ./$(NAME)

re:		fclean
		make tests_run
