##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Make
##

SRC		=	src/main.c \
			src/menu/create_menu.c \
			src/menu/menu.c \
			src/menu/event_mouse.c \
			src/menu/how_to_play.c \
			src/game/event.c \
			src/game/create_main_game.c \
			src/game/game.c \
			src/transition.c \
			src/my_cook.c \
			src/utils.c \
			src/song.c \
			src/game/pokemon.c

OBJ		=	$(SRC:.c=.o)

NAME	=	my_cook

MY_NAME	=	my_cook_other

CFLAGS	+=	-W -Wall -Wextra -g

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:	$(MY_NAME) $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -I./include -lc_graph_prog

my: $(MY_NAME)

$(MY_NAME): $(OBJ)
	gcc -o $(MY_NAME) $(OBJ) $(CSFML) $(CFLAGS) -I./include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(MY_NAME)

re: fclean all

my_re: fclean my
