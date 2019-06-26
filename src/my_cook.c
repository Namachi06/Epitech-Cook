/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** Execute the game
*/

#include "../include/my_cook.h"

void draw(t_window *window, t_menu **menu, t_game **game)
{
	if (window->switch_game == 2 || window->switch_game == 3)
		draw_transition(*menu, *game, window);
	else if (window->switch_game == 4)
		draw_game(window, *game);
	else if (window->switch_game == 0)
		draw_menu(window, *menu);
}

void my_cook(t_menu **menu, t_game **game)
{
	t_window *window = create_window(1920, 1080);
	(*game)->pokemon->offset = 0;

	init_menu(&(*menu));
	init_game(&(*game));
	music(window);
	while (sfRenderWindow_isOpen(window->window)) {
		while (sfRenderWindow_pollEvent(window->window, &window->event))
			analyse_events(window, *menu);
		draw(window, menu, game);
		sfRenderWindow_display(window->window);
		sfRenderWindow_clear(window->window, sfBlack);
	}
	destroy_music(window);
	destroy_menu(*menu);
	destroy_game(*game);
	sfRenderWindow_destroy(window->window);
}
