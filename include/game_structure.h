/*
** EPITECH PROJECT, 2017
** objects
** File description:
** 	Structure to create objects
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

typedef struct s_window
{
	sfRenderWindow *window;
	sfEvent event;
	sfMusic *music;
	int switch_game;
} t_window;

typedef struct s_game_object
{
	sfSprite *sprite;
	sfTexture *texture;
	sfVector2f spritePos;
	sfVector2f spriteScale;
	sfIntRect spriteRect;
	sfClock *clock;
	int offset;
} t_game_object;

typedef struct s_menu
{
	t_game_object *logo;
	t_game_object *background;
	t_game_object *transition;
	t_game_object *how;
	t_game_object **buttons;
} t_menu;

typedef struct s_game
{
	t_game_object **inventory;
	t_game_object *back_game;
	t_game_object *plate;
	t_game_object *pokemon;
} t_game;
