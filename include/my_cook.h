/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** Fonctions including my_cook game
*/

#include "game_structure.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

// Utils
sfIntRect create_rect(int width, int height, int left, int top);
sfVector2f create_pos(int x, int y);
t_window *create_window(unsigned int width, unsigned int height);
t_game_object *create_object(const char *path, sfVector2f pos, sfIntRect rect);

// Menu
int init_menu(t_menu **menu);
void create_logo(t_game_object **logo);
void create_background(t_game_object **background);
void create_transition(t_game_object **transition);
void create_buttons(t_game_object ***buttons);
void create_how(t_game_object **how);
void draw_menu(t_window *window, t_menu *menu);
void destroy_menu(t_menu *menu);
void handle_mouse(t_window *window, t_menu *menu);

//Game
void create_inventory(t_game_object ***inventory);
int create_game_background(t_game_object **game_back);
int create_plate(t_game_object **plate);
void create_pokemon(t_game_object **pokemon);
void init_game(t_game **game);
void draw_game(t_window *window, t_game *game);
void destroy_game(t_game *game);

//song
void destroy_music(t_window *window);
void music(t_window *window);

//How to play
void how_to_play(t_menu *menu);

//pokemon
void pokemon(t_window *window, t_game *game);

// my_cook
void my_cook(t_menu **menu, t_game **game);
int analyse_events(t_window *window, t_menu *menu);
void draw_transition(t_menu *menu, t_game *game, t_window *window);
