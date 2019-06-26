/*
** EPITECH PROJECT, 2017
** create_main_game.c
** File description:
** Create all sprites for the game
*/

#include "../../include/my_cook.h"

int create_game_background(t_game_object **game_back)
{
	sfIntRect rect;
	sfVector2f pos;

	pos = create_pos(0, 0);
	rect = create_rect(1920, 1080, 0, 0);
	*game_back = create_object("src/img/back_game.png", pos, rect);
	if (!*game_back)
		return (-1);
	return (0);
}

void create_inventory(t_game_object ***inventory)
{
	sfIntRect rect;
	sfVector2f pos;
	*inventory = (t_game_object **)malloc(sizeof(t_game_object *) * 9);
	int i = 0;
	const char *files[] = { "src/img/recipe/gateaux.png",
	"src/img/recipe/glace.png", "src/img/recipe/myrtille.png",
	"src/img/recipe/orange.png", "src/img/recipe/pasteque.png",
	"src/img/recipe/rond.png", "src/img/recipe/super_bonbon.png",
	"src/img/recipe/plat.png", NULL };

	for (; i < 8; i++) {
		pos = create_pos(70, (i * 67));
		rect = create_rect(55, 53, 0, 0);
		(*inventory)[i] = create_object(files[i], pos, rect);
		if (!(*inventory)[i])
			return;
	}
	(*inventory)[i] = NULL;
}

void create_pokemon(t_game_object **pokemon)
{
	sfIntRect rect;
	sfVector2f pos;

	pos = create_pos(-100, 700);
	rect = create_rect(61, 72, 0, 0);
	*pokemon = create_object("src/img/pokemon.png", pos, rect);
}

int create_plate(t_game_object **plate)
{
	sfIntRect rect;
	sfVector2f pos;

	pos = create_pos(600, 720);
	rect = create_rect(1000, 800, 0, 0);
	*plate = create_object("src/img/plate.png", pos, rect);
	if (!*plate)
		return (-1);
	return (0);
}
