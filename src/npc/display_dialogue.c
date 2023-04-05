/*
** EPITECH PROJECT, 2023
** B-MUL-200-REN-2-1-myrpg-louis.langanay
** File description:
** display_dialogue
*/

#include "rpg.h"

static void display_dialogue_box(rpg_t *rpg, sfVector2f view_pos)
{
    sfText *main_text = gl_get_text(rpg->glib, PLAYER_DIALOGUE_TEXT);
    sfVector2f text_pos = (sfVector2f){view_pos.x - 29 * 3, view_pos.y + 103};
    sfSprite_setPosition(RPA->dialog_box,
        (sfVector2f){view_pos.x, view_pos.y + 85});
    sfRenderWindow_drawSprite(RGW->window, RPA->dialog_box, NULL);

    if (my_strlen(sfText_getString(main_text)) > 53) {
        divide_a_sftext(main_text, text_pos, rpg);
    } else {
        sfText_setPosition(main_text, text_pos);
        sfRenderWindow_drawText(RGW->window, main_text, NULL);
    }

}

static void display_dialogue_choice_one(
    rpg_t *rpg,
    sfVector2f view_pos
)
{
    int id = get_key_id(RPK->choice_one.key, rpg);
    sfText *choice_one_text = gl_get_text(rpg->glib,
        PLAYER_DCHOICE_ONE_TEXT);

    sfText_setPosition(choice_one_text,
        (sfVector2f){view_pos.x - 29 * 3 + 16, view_pos.y + 138});
    sfRenderWindow_drawText(RGW->window, choice_one_text, NULL);
    if (id != -1) {
        sfSprite_setPosition(RPA->key_sprite[id],
            (sfVector2f) {view_pos.x - 29 * 3 + 16 / 2, view_pos.y + 142});
        sfRenderWindow_drawSprite(RGW->window, RPA->key_sprite[id], NULL);
    }
}

static void display_dialogue_choice_two(
    rpg_t *rpg,
    sfVector2f view_pos
)
{
    int id = get_key_id(RPK->choice_two.key, rpg);
    sfText *choice_two_text = gl_get_text(rpg->glib,
        PLAYER_DCHOICE_TWO_TEXT);

    sfText_setPosition(choice_two_text,
        (sfVector2f){view_pos.x + 15, view_pos.y + 138});
    sfRenderWindow_drawText(RGW->window, choice_two_text, NULL);
    if (id != -1) {
        sfSprite_setPosition(RPA->key_sprite[id],
            (sfVector2f) {view_pos.x + 5, view_pos.y + 142});
        sfRenderWindow_drawSprite(RGW->window, RPA->key_sprite[id], NULL);
    }
}

static void display_dialogue_escape(
    rpg_t *rpg,
    sfVector2f view_pos
)
{
    int id = get_key_id(RPK->escape.key, rpg);
    sfText *escape_text = gl_get_text(rpg->glib, PLAYER_DIALOGUE_TEXT_ESCAPE);
    char *str = get_language(rpg, "press__to_quit_dialog", RSG);

    sfText_setString(escape_text, str);
    sfText_setPosition(escape_text,
        (sfVector2f){view_pos.x - 29 * 3, view_pos.y + 138});
    sfRenderWindow_drawText(RGW->window, escape_text, NULL);
    if (id != -1) {
        sfSprite_setPosition(RPA->key_sprite[id],
            (sfVector2f) {view_pos.x - 29 * 3 + 35, view_pos.y + 142});
        sfRenderWindow_drawSprite(RGW->window, RPA->key_sprite[id], NULL);
    }
}

void display_dialogue(rpg_t *rpg)
{
    sfVector2f view_pos = sfView_getCenter(rpg->player->view);

    if (rpg->player->in_dialogue == 0)
        return;
    display_dialogue_box(rpg, view_pos);

    if (rpg->actual_dialog->options != NULL) {
        display_dialogue_choice_one(rpg, view_pos);
        display_dialogue_choice_two(rpg, view_pos);
    } else {
        display_dialogue_escape(rpg, view_pos);
    }
}