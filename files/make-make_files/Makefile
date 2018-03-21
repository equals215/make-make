##
## EPITECH PROJECT, 2017
## Make-make's Makefile
## File description:
## By Ndr, Forked by equals215
##

###############
#  VARIABLES  #
###############

#Nom du projet (binaire)
NAME=		PROJECTNAME

#Répertoire des sources (.c)
SRC_DIR=	$(realpath ./src)

#Répertoire de la lib (.a)
LIB_DIR=	$(realpath ./lib/my)

#Répertoire des includes (.h)
INC_DIR=	$(realpath ./include)

#Fichiers sources à compiler
SRC=		$(SRC_DIR)/*.c

#Lib à inclure
LIB=		my

#Fichiers objets (.o)
OBJ=		$(SRC:.c=.o)

#Arguments gcc
CFLAGS=		-W -Wall -Wextra -pedantic -I$(INC_DIR)

#Arguments de linkage
LDFLAGS=	-L$(LIB_DIR) -lmy

############
#  RÈGLES  #
############

all:		$(NAME)

#Compilation normale (lib + binaire)
$(NAME):
		make -C $(LIB_DIR)
		@echo "\n\033[1m\033[36mCompiling $(NAME)...\033[0m"
		gcc -o $(NAME) $(SRC) $(LDFLAGS)

#Compilation "debug" pour Valgrind et GDB (binaire uniquement)
debug:
		@echo "\033[1m\033[92mCompiling $(NAME) in debug mode...\033[0m"
		gcc -o $(NAME) $(SRC) $(LDFLAGS) -g3

#Efface les .o dans les sources et la libmy
clean:
		make clean -C $(LIB_DIR)
		@echo "\n\033[1m\033[33mCleaning files...\033[0m"
		rm -f $(OBJ)

#Efface le binaire et la lib
fclean:
		@echo "\n\033[1m\033[33mCleaning files and binary...\033[0m"
		rm -f $(NAME)
		make fclean -C $(LIB_DIR)

#Efface binaire et lib et recompile
re:		fclean all

#Lance les tests unitaires et exécute le binaire
tests_run:
		@echo "\033[1m\033[92mCompiling $(NAME) tests...\033[0m"
		make tests_run -C ./tests
		@echo "\033[1m\033[92mRunning $(NAME) tests...\033[0m"
		./PROJECTNAME_tests

#Lance le framework de tests unitaires avec lcov
tests_coverage:	tests_run
		@echo "\033[1m\033[92mLaunching the tests report...\033[0m"
		lcov --directory ./tests -c -o rapport.info &>/dev/null
		genhtml -o ./bonus/cov_report -t "code coverage report" rapport.info &>/dev/null
		xdg-open ./bonus/cov_report/src/index.html &>/dev/null

.PHONY: all clean debug fclean re tests_run tests_coverage
