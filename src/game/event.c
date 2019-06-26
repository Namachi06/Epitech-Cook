/*
** EPITECH PROJECT, 2017
** event.c
** File description:
** Handle events
*/

#include "../../include/my_cook.h"

void quit_or_play(t_window *window)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape))
		sfRenderWindow_close(window->window);
}

int analyse_events(t_window *window, t_menu *menu)
{
	switch (window->event.type) {
		case sfEvtMouseButtonPressed:
			handle_mouse(window, menu);
			break;
		case sfEvtClosed:
			sfRenderWindow_close(window->window);
			break;
		case sfEvtKeyPressed:
			quit_or_play(window);
			break;
		default:
			break;
	}
	return (0);
}
