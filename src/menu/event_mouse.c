/*
** EPITECH PROJECT, 2018
** event_mouse.c
** File description:
** Handle all clic button on cook
*/

#include "../../include/my_cook.h"

void mouse_quit(t_window *window, t_menu *menu)
{
	if ((window->event.mouseButton.x >= menu->buttons[2]->spritePos.x &&
			window->event.mouseButton.x <=
			menu->buttons[2]->spritePos.x +
			menu->buttons[2]->spriteRect.width)
			&& (window->event.mouseButton.y >= menu->buttons[2]->
			spritePos.y && window->event.mouseButton.y <=
			menu->buttons[2]->spritePos.y +
			menu->buttons[2]->spriteRect.height))
		sfRenderWindow_close(window->window);
}

void mouse_play(t_window *window, t_menu *menu)
{
	if ((window->event.mouseButton.x >= menu->buttons[0]->spritePos.x &&
			window->event.mouseButton.x <=
			menu->buttons[0]->spritePos.x + menu->buttons[0]->
			spriteRect.width)
			&& (window->event.mouseButton.y >=
			menu->buttons[0]->spritePos.y &&
			window->event.mouseButton.y <=
			menu->buttons[0]->spritePos.y +
			menu->buttons[0]->spriteRect.height)) {
		window->switch_game = 2;
		sfClock_restart(menu->transition->clock);
	}
}

void mouse_how(t_window *window, t_menu *menu)
{
	if ((window->event.mouseButton.x >= menu->buttons[1]->spritePos.x &&
			window->event.mouseButton.x <=
			menu->buttons[1]->spritePos.x +
			menu->buttons[1]->spriteRect.width)
			&& (window->event.mouseButton.y >=
			menu->buttons[1]->spritePos.y &&
			window->event.mouseButton.y <=
			menu->buttons[1]->spritePos.y +
			menu->buttons[1]->spriteRect.height)) {
		how_to_play(menu);
	}
}

void handle_mouse(t_window *window, t_menu *menu)
{
	if (window->switch_game == 3)
		return;
	mouse_play(window, menu);
	mouse_quit(window, menu);
	mouse_how(window, menu);
}
