/*
** EPITECH PROJECT, 2017
** utils
** File description:
** 	Utils fonctions
*/

#include "../include/my_cook.h"

sfIntRect create_rect(int width, int height, int left, int top)
{
	sfIntRect rect;

	rect.height = height;
	rect.width = width;
	rect.left = left;
	rect.top = top;
	return (rect);
}

sfVector2f create_pos(int x, int y)
{
	sfVector2f pos;

	pos.x = x;
	pos.y = y;
	return (pos);
}

t_window *create_window(unsigned int width, unsigned int height)
{
	t_window *window = (t_window *)malloc(sizeof(t_window));

	sfVideoMode video_mode = {width, height, 32};
	window->window = sfRenderWindow_create(video_mode, "Cook Eat Repeat",
	sfResize | sfClose, NULL);
	window->switch_game = 0;
	return (window);
}

t_game_object *create_object(const char *path, sfVector2f pos, sfIntRect rect)
{
	t_game_object *create_object;

	create_object = (t_game_object *)malloc(sizeof(t_game_object));
	create_object->texture = sfTexture_createFromFile(path, NULL);
	if (!create_object->texture) {
		return (NULL);
	}
	create_object->sprite = sfSprite_create();
	if (!create_object->sprite) {
		return (NULL);
	}
	sfSprite_setTexture(create_object->sprite, create_object->texture,
		sfFalse);
	sfTexture_setSmooth(create_object->texture, sfTrue);
	sfSprite_setTextureRect(create_object->sprite, rect);
	sfSprite_setPosition(create_object->sprite, pos);
	create_object->spritePos = pos;
	create_object->spriteRect = rect;
	create_object->clock = sfClock_create();
	return (create_object);
}
