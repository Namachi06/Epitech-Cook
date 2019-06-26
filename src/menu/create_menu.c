/*
** EPITECH PROJECT, 2017
** create.c
** File description:
** Create all object
*/

#include "../../include/my_cook.h"

void create_transition(t_game_object **transition)
{
	sfIntRect rect;
	sfVector2f pos;

	pos = create_pos(-1920, 0);
	rect = create_rect(1920, 1080, 0, 0);
	*transition = create_object("src/img/transition.png", pos, rect);
}

void create_background(t_game_object **background)
{
	sfIntRect rect;
	sfVector2f pos;

	pos = create_pos(0, 0);
	rect = create_rect(1920, 1080, 0, 0);
	*background = create_object("src/img/back_fallout.png", pos, rect);
}

void create_logo(t_game_object **logo)
{
	sfIntRect rect;
	sfVector2f pos;

	pos = create_pos(760, 50);
	rect = create_rect(364, 208, 0, 0);
	*logo = create_object("src/img/fallout_logo.png", pos, rect);
}

void create_buttons(t_game_object ***buttons)
{
	sfIntRect rect;
	sfVector2f pos;
	*buttons = (t_game_object **)malloc(sizeof(t_game_object *) * 4);
	const char *button[] = { "src/img/play.png", "src/img/how.png",
		"src/img/exit.png", NULL };
	int i = 0;

	for (; i < 3; i++) {
		if (i == 1) {
			pos = create_pos(725, 285 * (i + 1));
			rect = create_rect(451, 51, 0, 0);
			(*buttons)[i] = create_object(button[i], pos, rect);
			continue;
		}
		pos = create_pos(800, 285 * (i + 1));
		rect = create_rect(280, 85, 0, 0);
		(*buttons)[i] = create_object(button[i], pos, rect);
	}
	(*buttons)[i] = NULL;
}

void create_how(t_game_object **how)
{
	sfIntRect rect;
	sfVector2f pos;

	pos = create_pos(0, 0);
	rect = create_rect(1232, 664, 0, 0);
	*how = create_object("src/img/how_cook.png", pos, rect);
}
