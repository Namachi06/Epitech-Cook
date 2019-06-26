/*
** EPITECH PROJECT, 2017
** menu
** File description:
** Manage a menu
*/

#include "../../include/my_cook.h"

void destroy_menu(t_menu *menu)
{
	sfSprite_destroy(menu->background->sprite);
	sfSprite_destroy(menu->logo->sprite);
	sfSprite_destroy(menu->transition->sprite);
	for (int i = 0; menu->buttons[i] != NULL; i++)
		sfSprite_destroy(menu->buttons[i]->sprite);
}

void draw_menu(t_window *window, t_menu *menu)
{
	sfRenderWindow_drawSprite(window->window,
			menu->background->sprite, NULL);
	sfRenderWindow_drawSprite(window->window, menu->logo->sprite, NULL);
	sfRenderWindow_drawSprite(window->window, menu->transition->sprite,
		NULL);
	for (int i = 0; menu->buttons[i] != NULL; i++)
		sfRenderWindow_drawSprite(window->window,
			menu->buttons[i]->sprite, NULL);
}

int init_menu(t_menu **menu)
{
	*menu = (t_menu *)malloc(sizeof(t_menu));

	create_background(&(*menu)->background);
	create_logo(&(*menu)->logo);
	create_buttons(&(*menu)->buttons);
	create_transition(&(*menu)->transition);
	create_how(&(*menu)->how);
	return (0);
}
