/*
** EPITECH PROJECT, 2023
** B-MUL-200-REN-2-1-myrpg-louis.langanay
** File description:
** insert_zombies
*/

#include "rpg.h"

static void set_zombies(zombies_t *new_node)
{
    new_node->clock_animation = sfClock_create();
    sfRectangleShape_setPosition(new_node->hitbox, new_node->pos);
    sfRectangleShape_setSize(new_node->hitbox, (sfVector2f){60, 110});
    sfRectangleShape_setFillColor(new_node->hitbox, sfTransparent);
    sfRectangleShape_setOutlineColor(new_node->hitbox, sfRed);
    sfRectangleShape_setOutlineThickness(new_node->hitbox, 3);
    sfRectangleShape_setScale(new_node->hitbox, (sfVector2f){-1, 1});
    sfRectangleShape_move(new_node->hitbox, (sfVector2f){-48, 40});
    sfSprite_setTexture(new_node->sprite, new_node->texture, sfTrue);
    sfSprite_setTextureRect(new_node->sprite, new_node->rect);
    sfSprite_setScale(new_node->sprite, new_node->scale);
    sfSprite_setPosition(new_node->sprite, new_node->pos);
}

void insert_zombies(rpg_t *rpg, zombies_t **list)
{
    zombies_t *new_node = malloc(sizeof(zombies_t));
    new_node->pos = (sfVector2f){1920 + rand() % 500, 620 - rand() % 420};
    new_node->type = 1;
    new_node->hp = 100;
    new_node->damage = 5;
    new_node->speed = 1.0;
    new_node->direction = 1;
    new_node->hitbox = sfRectangleShape_create();
    new_node->sprite = sfSprite_create();
    new_node->texture = sfTexture_createFromFile(ZOMBIE_0, NULL);
    new_node->rect = (sfIntRect){0, 0, 72, 72};
    new_node->scale = (sfVector2f){-2.0, 2.0};
    new_node->attack_clock = sfClock_create();
    new_node->clock = sfClock_create();
    new_node->last_distance = 0;
    new_node->attack_speed = 1.5;
    new_node->animation = 0;
    set_zombies(new_node);
    new_node->next = *list;
    *list = new_node;
}