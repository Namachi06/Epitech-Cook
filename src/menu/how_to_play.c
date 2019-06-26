/*
** EPITECH PROJECT, 2018
** how_to_play.c
** File description:
** Handle how to play
*/

#include "../../include/my_cook.h"

void event(sfRenderWindow *window, sfEvent event)
{
	switch (event.type) {
		case sfEvtClosed:
			sfRenderWindow_close(window);
			break;
		default:
			break;
	}
}

void how_to_play(t_menu *menu)
{
	sfEvent fevent;
	sfVideoMode video_mode = {1232, 664, 32};
	sfRenderWindow *window = sfRenderWindow_create(video_mode,
			"How to Play", sfClose | sfResize, NULL);

	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &fevent))
			event(window, fevent);
		sfRenderWindow_clear(window, sfBlack);
		sfRenderWindow_drawSprite(window, menu->how->sprite,
			NULL);
		sfRenderWindow_display(window);
	}
	sfRenderWindow_destroy(window);
}
