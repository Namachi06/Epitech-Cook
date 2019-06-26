/*
** EPITECH PROJECT, 2018
** song.c
** File description:
** Handle Song
*/

#include "../include/my_cook.h"

void destroy_music(t_window *window)
{
	sfMusic_stop(window->music);
	sfMusic_destroy(window->music);
}

void music(t_window *window)
{
	window->music = sfMusic_createFromFile("src/img/music.ogg");
	sfMusic_setLoop(window->music, sfTrue);
	sfMusic_play(window->music);
}
