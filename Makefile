##
## EPITECH PROJECT, 2023
## glib
## File description:
## Makefile
##

include Makefile_colors.mk

NAME = my_rpg
CC = gcc


VPATH := src
VPATH += src/init
VPATH += src/init/glib
VPATH += src/init/rpg
VPATH += src/init/save
VPATH += src/init/splash_screen
VPATH += src/init/player
VPATH += src/init/popup
VPATH += src/init/popup/dialogue
VPATH += src/init/popup/interaction
VPATH += src/init/popup/lore
VPATH += src/init/languages
VPATH += src/init/npc
VPATH += src/init/sounds
VPATH += src/init/settings
VPATH += src/init/menu
VPATH += src/init/menu/keybind
VPATH += src/init/inventory
VPATH += src/init/quests
VPATH += src/init/lore
VPATH += src/languages
VPATH += src/save
VPATH += src/save/save
VPATH += src/save/load
VPATH += src/npc
VPATH += src/npc/functions
VPATH += src/game
VPATH += src/splash_screen
VPATH += src/text
VPATH += src/quests
VPATH += src/quests/functions
VPATH += src/map
VPATH += src/menu
VPATH += src/lore
VPATH += src/sounds
VPATH += src/sounds/functions
VPATH += src/map/load
VPATH += src/map/draw
VPATH += src/utils
VPATH += src/view
VPATH += src/events
VPATH += src/inventory
VPATH += src/player
VPATH += src/player/moovment
VPATH += src/player/interactions
VPATH += src/player/colisions
VPATH += src/player/interactions/functions
VPATH += src/player/interactions/functions/npc

vpath %.c $(VPATH)

SRC := main.c
SRC += my_strcmp.c
SRC += my_strcat.c
SRC += my_strcpy.c
SRC += create_map.c
SRC += load_tiles_textures.c
SRC += load_map_layers.c
SRC += load_layer_data_arr.c
SRC += load_layer_objects.c
SRC += load_tiles_colisions.c
SRC += load_layer_sprites.c
SRC += draw_map.c
SRC += draw_layer.c
SRC += set_view_on_player.c
SRC += init_view.c
SRC += init_player.c
SRC += draw_player.c
SRC += change_player_rect.c
SRC += check_player_moovment.c
SRC += check_colisions.c
SRC += check_interactions.c
SRC += get_interactions_array.c
SRC += inte_test.c
SRC += i_chest.c
SRC += load_tilesets.c
SRC += print_framerate.c
SRC += draw_layer_by_class.c
SRC += draw_layer_by_order.c
SRC += e_key_pressed.c
SRC += init_events.c
SRC += init_glib.c
SRC += init_window.c
SRC += e_key_released.c
SRC += e_close.c
SRC += get_map.c
SRC += init_rpg.c
SRC += i_house_door.c
SRC += init_player_assets.c
SRC += init_popup_interaction.c
SRC += init_fonts.c
SRC += draw_interaction_popup.c
SRC += my_strcat_malloc.c
SRC += my_strlen.c
SRC += get_keyboard_array.c
SRC += i_house_paper.c
SRC += init_language.c
SRC += init_settings.c
SRC += get_language.c
SRC += load_save.c
SRC += init_save.c
SRC += init_main_menu.c
SRC += e_start_game.c
SRC += draw_menu.c
SRC += init_npcs.c
SRC += my_strdup.c
SRC += init_npc_dialogs.c
SRC += draw_npc.c
SRC += little_girl.c
SRC += get_npc.c
SRC += init_popup_dialogue.c
SRC += display_dialogue.c
SRC += start_dialogue.c
SRC += init.c
SRC += get_key_id.c
SRC += draw_inventory.c
SRC += init_inventory_asset.c
SRC += init_inventory.c
SRC += e_open_inventory.c
SRC += draw_items.c
SRC += next_dialogue.c
SRC += e_dialogue.c
SRC += get_mid_char.c
SRC += init_player_assets_dialogue.c
SRC += divide_a_sftext.c
SRC += my_strndup.c
SRC += load_npc_interactions.c
SRC += my_arr_contains.c
SRC += my_arrlen.c
SRC += save_npc_interactions.c
SRC += init_player_textures.c
SRC += start_game.c
SRC += draw_splash_screen.c
SRC += init_splash_screen.c
SRC += game_loop.c
SRC += load_maps.c
SRC += init_settings_menu.c
SRC += e_seetings.c
SRC += init_keybinds.c
SRC += e_quit.c
SRC += save_player.c
SRC += load_player.c
SRC += load_game.c
SRC += save_game.c
SRC += npc_give_food.c
SRC += check_dialogue_function.c
SRC += get_npc_func_arr.c
SRC += load_settings.c
SRC += save_settings.c
SRC += save.c
SRC += save_quests_in_progress.c
SRC += init_sounds.c
SRC += load_quests_in_progress.c
SRC += init_popup_lore.c
SRC += init_quests.c
SRC += init_quest_assets.c
SRC += draw_popup_lore.c
SRC += start_quest.c
SRC += stop_quest.c
SRC += check_popup_lore.c
SRC += divide_a_text.c
SRC += get_quests_func_arr.c
SRC += get_quest_by_id.c
SRC += go_to_annia.c
SRC += draw_quests.c
SRC += get_quest.c
SRC += i_house_basement.c
SRC += i_grocery_door.c
SRC += game_start.c
SRC += e_settings_key.c
SRC += i_pass_fence.c
SRC += i_end_map_top.c
SRC += i_paper_music.c
SRC += i_paper_resources.c
SRC += i_basement_paper.c
SRC += i_house1_door.c
SRC += i_end_map_down.c
SRC += init_keybinds_keys.c
SRC += draw_menu_keys.c
SRC += init_saves_buttons.c
SRC += init_saves_texts.c
SRC += draw_saves_menu.c
SRC += e_resume_btn.c
SRC += e_save1.c
SRC += e_save2.c
SRC += e_save3.c
SRC += fade_sound.c
SRC += init_game_sounds.c
SRC += start_sound.c
SRC += check_sounds.c
SRC += check_sounds_interactions.c
SRC += get_sounds_array.c
SRC += s_basement.c
SRC += s_house.c
SRC += i_paper_grocery.c
SRC += start_narative_popup.c
SRC += check_narative_popup.c
SRC += i_soda.c
SRC += quest_is_in_progress.c
SRC += load_quests_completed.c
SRC += quest_is_completed.c
SRC += save_quests_completed.c
SRC += draw_settings.c
SRC += init_slider.c
SRC += draw_quests_ig.c
SRC += draw_quests_inv.c
SRC += my_atoi.c

INC_DIR 	:= includes
LIB_DIR1 	:= ./lib/gl
LIB_NAME1 	:= gl
LIB_DIR2 	:= ./lib/jp
LIB_NAME2 	:= jp

CFLAGS = -iquote $(INC_DIR) -Wall -Wextra -Werror -g
CFLAGS += -l csfml-window -l csfml-graphics -l csfml-system -l csfml-audio

LIBFLAGS = -L$(LIB_DIR1) -l$(LIB_NAME1) -L$(LIB_DIR2) -l$(LIB_NAME2)

BUILD_DIR = build
OBJ := $(SRC:%.c=$(BUILD_DIR)/%.o)

DIE = exit 1
ECHO = echo -e

%.c:
	@ $(ECHO) "${_B_RED}[ERROR]${_END} File ${_B_WHITE}$@${_END} not found."
	@ $(DIE)

all: $(NAME)
	@ $(ECHO) "${_B_GREEN}[SUCCES]${_END} RPG compiled successfully, \
	ready to play!"

$(BUILD_DIR)/%.o: %.c
	@ mkdir -p $(@D)
	@ $(CC) $(CFLAGS) $(LIBFLAGS) -c $< -o $@
	@ $(ECHO) "${_CYAN}[OK]$(_END) -> $(CC)    $(_U_WHITE)$<$(_END)"

$(NAME): libs $(OBJ) $(SRC)
	@ mkdir -p $(BUILD_DIR)
	@ $(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LIBFLAGS)
	@ $(ECHO) "${_CYAN}[OK]$(_END) -> $(CC)    \
	$(_U_WHITE)$(NAME) $(CFLAGS) $(LIBFLAGS)${_END}"
	@ $(ECHO) "$(_B_PURPLE)[STATS]$(_END) -> \
	$(_U_WHITE)$(shell echo "$?" | wc -w) file(s) compiled${_END}."

libs:
	@ make -s -C ${LIB_DIR1}
	@ make -s -C ${LIB_DIR2}

debug: $(CFLAGS) += -g
debug: re

clean:
	@ $(RM) *.gcda
	@ $(RM) *.gcno
	@ $(RM) *.gcov
	@ $(RM) vgcore.*
	@ $(RM) coding-style-reports.log
	@ $(RM)	$(OBJ)
	@ $(ECHO) "${_BLACK}${_BB_WHITE}-> $(RM)    *.gcda${_END}"
	@ $(ECHO) "${_BLACK}${_BB_WHITE}-> $(RM)    *.gcno${_END}"
	@ $(ECHO) "${_BLACK}${_BB_WHITE}-> $(RM)    *.gcov${_END}"
	@ $(ECHO) "${_BLACK}${_BB_WHITE}-> $(RM)    vgcore.*${_END}"
	@ $(ECHO) "${_BLACK}${_BB_WHITE}-> $(RM)    coding-style-reports.log${_END}"
	@ $(ECHO) "${_BLACK}${_BB_WHITE}-> $(RM)    $(OBJ)${_END}"

fclean: clean
	@ make fclean -s -C $(LIB_DIR1)
	@ make fclean -s -C $(LIB_DIR2)
	@ $(RM) -r $(BUILD_DIR)
	@ $(RM)	$(NAME)
	@ $(ECHO) "${_BLACK}${_BB_WHITE}-> $(RM)    $(BUILD_DIR)${_END}"
	@ $(ECHO) "${_BLACK}${_BB_WHITE}-> $(RM)    $(NAME)${_END}"

re: fclean all

.PHONY: clean fclean re
