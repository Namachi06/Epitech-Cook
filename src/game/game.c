/*
** EPITECH PROJECT, 2017
** game.c
** File description:
** function
*/

#include "../../include/my_cook.h"

void draw_game(t_window *window, t_game *game)
{
	sfRenderWindow_drawSprite(window->window, game->back_game->sprite,
			NULL);
	for (int i = 0; game->inventory[i] != NULL; i++)
		sfRenderWindow_drawSprite(window->window,
			game->inventory[i]->sprite, NULL);
	sfRenderWindow_drawSprite(window->window, game->plate->sprite, NULL);
	pokemon(window, game);
}

void destroy_game(t_game *game)
{
	sfSprite_destroy(game->back_game->sprite);
	for (int i = 0; game->inventory[i] != NULL; i++)
		sfSprite_destroy(game->inventory[i]->sprite);
	sfSprite_destroy(game->plate->sprite);
}

void init_game(t_game **game)
{
	*game = (t_game *)malloc(sizeof(t_game));
	create_game_background(&(*game)->back_game);
	create_plate(&(*game)->plate);
	create_inventory(&(*game)->inventory);
	create_pokemon(&(*game)->pokemon);
}
