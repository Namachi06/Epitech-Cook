/*
** EPITECH PROJECT, 2018
** transition.c
** File description:
** Handle transition
*/

#include "../include/my_cook.h"

void transition_forward(t_window *window, t_menu *menu)
{
	draw_menu(window, menu);
	menu->transition->spritePos.x += 5;
	sfSprite_setPosition(menu->transition->sprite,
		menu->transition->spritePos);
	sfRenderWindow_drawSprite(window->window,
		menu->transition->sprite, NULL);
}

void transition_backward(t_window *window, t_menu *menu, t_game *game)
{
	draw_game(window, game);
	menu->transition->spritePos.x -= 8;
	sfSprite_setPosition(menu->transition->sprite,
		menu->transition->spritePos);
	sfRenderWindow_drawSprite(window->window,
		menu->transition->sprite, NULL);
}

void draw_transition(t_menu *menu, t_game *game, t_window *window)
{
	sfTime timer;
	float seconds = 0;

	timer = sfClock_getElapsedTime(menu->transition->clock);
	seconds = timer.microseconds / 1000000.0;
	if (seconds >= 2.5)
		window->switch_game = 3;
	if (window->switch_game == 2)
		transition_forward(window, menu);
	if (window->switch_game == 3)
		transition_backward(window, menu, game);
}
