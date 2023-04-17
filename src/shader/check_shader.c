/*
** EPITECH PROJECT, 2023
** B-MUL-200-REN-2-1-myrpg-louis.langanay
** File description:
** check_shader
*/

#include "rpg.h"

void static check_rain(rpg_t *rpg, sfRectangleShape *rect)
{
    if (rpg->shader->rain_bool == 1) {
        sfShader_setFloatUniform(rpg->shader->shader_rain, "time",
        sfTime_asSeconds(sfClock_getElapsedTime(rpg->shader->shader_clock)));
        sfRenderWindow_drawRectangleShape(rpg->glib->window->window,
        rect, &rpg->shader->states_rain);
    }
}

void static check_blood(rpg_t *rpg, sfRectangleShape *rect)
{
    if (rpg->shader->blood_bool == 1) {
        sfShader_setFloatUniform(rpg->shader->shader_blood, "time",
        sfTime_asSeconds(sfClock_getElapsedTime(rpg->shader->shader_clock)));
        sfRenderWindow_drawRectangleShape(rpg->glib->window->window, rect,
        &rpg->shader->states_blood);
    }
}

void static check_fade(rpg_t *rpg, sfRectangleShape *rect)
{
    if (rpg->shader->fade_bool == 1) {
        sfShader_setFloatUniform(rpg->shader->shader_fade, "time",
        sfTime_asSeconds(sfClock_getElapsedTime(rpg->shader->fade_clock)));
        sfShader_setFloatUniform(rpg->shader->shader_fade, "fade",
        rpg->shader->fade_val);
        sfRenderWindow_drawRectangleShape(rpg->glib->window->window, rect,
        &rpg->shader->states_fade);
    }
}

void check_shader(rpg_t *rpg)
{
    sfRectangleShape *rect = sfRectangleShape_create();
    sfRectangleShape_setSize(rect, (sfVector2f){1920, 1080});
    sfRectangleShape_setTexture(rect,
    sfTexture_createFromFile("resources/shader/void.png", NULL), sfTrue);

    check_rain(rpg, rect);
    check_blood(rpg, rect);
    check_fade(rpg, rect);
    if (rpg->shader->fade_bool == 0)
        sfClock_restart(rpg->shader->fade_clock);

    sfRectangleShape_destroy(rect);
}
