/*
** EPITECH PROJECT, 2018
** pokemon.c
** File description:
** Handle pokemon animation sprite
*/

#include "../../include/my_cook.h"


void animate_pokemon(t_game *game)
{
	sfTime timer;
	float millis;

	timer = sfClock_getElapsedTime(game->pokemon->clock);
	millis = timer.microseconds / 1000.0;
	if (millis >= 200) {
		game->pokemon->offset++;
		game->pokemon->offset %= 9;
		game->pokemon->spriteRect.left =
			game->pokemon->offset * 47;
		sfSprite_setTextureRect(game->pokemon->sprite,
			game->pokemon->spriteRect);
		sfClock_restart(game->pokemon->clock);
	}
}

void pokemon(t_window *window, t_game *game)
{
	if (game->pokemon->spritePos.x != 300) {
		game->pokemon->spritePos.x++;
		sfSprite_setPosition(game->pokemon->sprite,
			game->pokemon->spritePos);
	}
	animate_pokemon(game);
	sfRenderWindow_drawSprite(window->window,
		game->pokemon->sprite, NULL);
}
