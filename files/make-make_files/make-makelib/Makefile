##
## EPITECH PROJECT, 2017
## auto-libmy Makefile
## File description:
## auto-libmy Makefile
##

###############
#  VARIABLES  #
###############

#Nom de la lib produite (lib*.a)
NAME=		libmy.a

#Répertoire des sources de la lib (.c)
SRC_DIR=	$(realpath .)

#Destination de la copie de la lib (parce que Marvin est capricieux)
CPY_DIR=	$(realpath ..)

#Répertoire de destination des includes (.h)
INC_DIR=	$(realpath ../../include)

#Fichiers sources de la lib (.c)
SRC=		$(SRC_DIR)/get_next_line.c
		$(SRC_DIR)/my_atoi.c
		$(SRC_DIR)/my_compute_power_rec.c
		$(SRC_DIR)/my_compute_square_root.c
		$(SRC_DIR)/my_find_prime_sup.c
		$(SRC_DIR)/my_getnbr.c
		$(SRC_DIR)/my_isneg.c
		$(SRC_DIR)/my_is_prime.c
		$(SRC_DIR)/my_itoa.c
		$(SRC_DIR)/my_itos.c
		$(SRC_DIR)/my_printf.c
		$(SRC_DIR)/my_printf_core1.c
		$(SRC_DIR)/my_printf_core2.c
		$(SRC_DIR)/my_putchar.c
		$(SRC_DIR)/my_put_nbr.c
		$(SRC_DIR)/my_putstr.c
		$(SRC_DIR)/my_revstr.c
		$(SRC_DIR)/my_sort_int_array.c
		$(SRC_DIR)/my_strcapitalize.c
		$(SRC_DIR)/my_strcat.c
		$(SRC_DIR)/my_strcmp.c
		$(SRC_DIR)/my_strcpy.c
		$(SRC_DIR)/my_strdup.c
		$(SRC_DIR)/my_str_isalpha.c
		$(SRC_DIR)/my_str_islower.c
		$(SRC_DIR)/my_str_isnum.c
		$(SRC_DIR)/my_str_isprintable.c
		$(SRC_DIR)/my_str_isupper.c
		$(SRC_DIR)/my_strlen.c
		$(SRC_DIR)/my_strlowcase.c
		$(SRC_DIR)/my_strncat.c
		$(SRC_DIR)/my_strncmp.c
		$(SRC_DIR)/my_strncpy.c
		$(SRC_DIR)/my_strstr.c
		$(SRC_DIR)/my_strtod.c
		$(SRC_DIR)/my_str_to_word_array.c
		$(SRC_DIR)/my_strupcase.c
		$(SRC_DIR)/my_swap.c

#Fichiers objets (.o) utiles à la compilation de la lib
OBJ=		$(SRC:.c=.o) $(SRC_UT:.c=.o)

#Flags de compilation
CFLAGS=		-W -Wall -Wextra -Werror -pedantic -I$(INC_DIR)


############
#  RÈGLES  #
############

all:		$(NAME)

#Création de la lib, puis copie dans le dossier lib, puis copie le .h dans includes
$(NAME):
		@echo "\n\033[1m\033[36m\tCompiling $(NAME)...\033[0m"
		gcc -c $(SRC) $(CFLAGS)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) $(CPY_DIR)/$(NAME)

#Supprime les fichiers .o générés
clean:
		@echo "\n\033[1m\033[33m\tCleaning lib files...\033[0m"
		rm -f $(OBJ)

#Supprime les fichiers .o et la lib générée
fclean:
		@echo "\n\033[1m\033[33m\tCleaning lib & lib files...\033[0m"
		rm -f $(OBJ)
		rm -f $(NAME)
		rm -f $(CPY_DIR)/$(NAME)

#Supprime puis recompile la lib
re:		fclean all
