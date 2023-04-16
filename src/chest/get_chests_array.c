/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** get_chests_array
*/

#include "rpg.h"

chests_t *get_chests_array(void)
{
    chests_t inte_array[] = {
        {"c_fridge", c_fridge},
        {NULL, NULL}
    };
    chests_t *inte = malloc(sizeof(chests_t) *
        (sizeof(inte_array) / sizeof(chests_t)));
    for (long unsigned int x = 0; x < sizeof(inte_array) /
        sizeof(chests_t); x++) {
        inte[x].name = inte_array[x].name;
        inte[x].func = inte_array[x].func;
    }
    return inte;
}
