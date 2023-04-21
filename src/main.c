/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** main
*/

#include "rpg.h"

int main(int ac, char **av)
{
    rpg_t *rpg = malloc(sizeof(rpg_t));
    if (doc_function(ac, av) == 1) return 0;
    init_rpg(rpg, ac, av);
    init(rpg);
    rpg->shader->torch_bool = 1;
    while (sfRenderWindow_isOpen(rpg->glib->window->window)) {
        gl_check_events(rpg->glib->window, rpg->glib->events, rpg);
        sfRenderWindow_clear(rpg->glib->window->window, sfBlack);
        gl_buttons_hovered(rpg->glib->buttons, rpg->glib->window, rpg);
        if (rpg->game_state == GAME || rpg->game_state == GAME_LOST
            || rpg->game_state == PAUSE || rpg->game_state == GAME_WIN)
            game_loop(rpg);
        if (rpg->game_state == MENU) game_start(rpg);
        sfRenderWindow_display(rpg->glib->window->window);
        if (rpg->maps_loaded == 0) load_maps(rpg);
        gl_buttons_hovered(rpg->glib->buttons, rpg->glib->window, rpg);
    }
    my_free(rpg);
}
