/*
** EPITECH PROJECT, 2023
** B-MUL-200-REN-2-1-myrpg-louis.langanay
** File description:
** init_inventory
*/

#include "rpg.h"

void init_inventory(rpg_t *rpg)
{
    int width = rpg->glib->window->mode.width;
    int height = rpg->glib->window->mode.height;

    rpg->player->inventory->background = sfRectangleShape_create();
    rpg->player->inventory->items_sprite = malloc(sizeof(sfSprite *) * NB_ITEMS);
    for (int i = 0; i < NB_ITEMS; i++) {
        rpg->player->inventory->items_sprite[i] = sfSprite_create();
    }
    sfRectangleShape_setSize(rpg->player->inventory->background, (sfVector2f) {width, height});
    sfRectangleShape_setFillColor(rpg->player->inventory->background, (sfColor) {0, 0, 0, 200});
}
