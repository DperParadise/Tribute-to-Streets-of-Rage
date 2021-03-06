#ifndef __MODULESCENEROUND1_H__
#define __MODULESCENEROUND1_H__

#include "Module.h"
#include <list>
#include <vector>
#include "Animation.h"
#include "HealthChicken.h"
#include "Point.h"

struct SDL_Texture;
class ScenarioElement;
class Entity;
class GUI;
class Player;
class Garcia;
class HealthBar;
class ModuleSceneRound1 : public Module
{
public:
	ModuleSceneRound1(bool active = true);
	virtual ~ModuleSceneRound1();

	bool Init();
	bool Start();
	update_status Update();
	update_status PostUpdate();
	bool CleanUp();

	GUI *gui = nullptr;
	GUI *go_sign = nullptr;
	HealthBar *player_HP = nullptr;
	HealthBar *boss_HP = nullptr;
	GUI *boss_white_bar = nullptr;
	GUI *boss_title = nullptr;
	GUI *help_text = nullptr;
	GUI *help_menu = nullptr;
	GUI *help_panel = nullptr;
	GUI *god_mode_text = nullptr;
	GUI *thanks_for_playing = nullptr;

	HealthChicken *health_chicken_prototype = nullptr;
	iPoint chicken_first_area;
	iPoint chicken_second_area;
	iPoint chicken_third_area;

	Entity *foreground = nullptr;

	//-------------------- SCENE BOUNDARIES -------------------
	int upper_limit = 90;
	int lower_limit = 160;
	int right_limit = 3840;

	//-------------------- SCENE STOP POINTS -----------------
	int first_stop_x = 1537;
	int second_stop_x = 2306;
	int third_stop_x = 0;// 3075;

	bool first_stop_reached = false;
	bool second_stop_reached = false;
	bool third_stop_reached = false;
	bool end_of_scene_reached = false;

	bool first_area_clear = false;
	bool second_area_clear = false;
	bool third_area_clear = false;
	bool end_of_scene_clear = false;

	bool show_go = false;
	bool show_boss_health_bar = false;
	bool show_thanks = false;

	std::list<Entity*> dynamic_entities;
	bool entity_erased = false;


private:
	std::list<int*> animation_list;
	std::vector<Entity*> scenario_entities;
	void LoadConfig();
	void LoadSceneAssets();
	void GenerateChicken(iPoint position, int depth);
	void LoadAudio();
	
	int go_sign_show_frames = 180;
	int go_sign_show_counter = 0;
	bool go_sign_played = false;
	
	bool show_help = false;

	int zero_depth = 0;
	iPoint background_pos = { 0,32 };
	iPoint pinepot1_pos = { 768,32 };
	iPoint pinepot2_pos = { 3605,32 };
	iPoint breakfastdinner1_pos = { 1028, 31 };
	iPoint breakfastdinner2_pos = { 1604, 31 };
	iPoint LDevo1_pos = { 1338, 32 };
	iPoint LDevo2_pos = { 1850, 32 };
	iPoint ranchShop1_pos = { 0, 32 };
	iPoint ranchShop2_pos = { 2053, 32 };
	iPoint abcShop1_pos = { 567, 32 };
	iPoint abcShop2_pos = { 2875, 32 };
	iPoint cafeRestaurant1_pos = { 132, 96 };
	iPoint cafeRestaurant2_pos = { 1864, 96 };
	iPoint cafeRestaurant3_pos = { 2440, 96 };
	iPoint cafeRestaurant4_pos = { 3128, 48 };
	iPoint cafeRestaurant5_pos = { 3224, 48 };

	iPoint foreground_pos = { 0,32 };
	iPoint gui_pos = { 0, 0 };
	iPoint go_sign_pos = { 800, 160 };
	iPoint player_HP_pos = { 24, 51 };
	iPoint boss_HP_pos = { 575, 51 };
	iPoint boss_title_pos = { 575, 24 };
	iPoint help_text_pos = { 266, 20 };
	iPoint help_panel_pos = { 250, 100 };
	iPoint god_mode_text_pos = { 24,69 };
	iPoint thanks_for_playing_pos = { 290, 200 };
	
	SDL_Texture *tx_background = nullptr;
	SDL_Texture *tx_foreground = nullptr;
	SDL_Texture *tx_neons = nullptr;
	SDL_Texture *tx_gui = nullptr;
	SDL_Texture *tx_garcia = nullptr;
	SDL_Texture *tx_ground_items = nullptr;

	Animation neon_pinepot;
	Animation neon_breakfast_dinner;
	Animation neon_ldevo;
	Animation neon_ranch_shop;
	Animation neon_abc_shop;
	Animation neon_cafe_restaurant;
	Animation go_sign_blink;
	Animation go_sign_transparent;

	Animation gui_background;
	Animation anim_player_HP;
	Animation anim_boss_HP;
	Animation anim_boss_white_bar;
	Animation anim_boss_title;
	Animation anim_help_text;
	Animation anim_help_panel;
	Animation anim_god_mode_text;
	Animation anim_thanks;
};

#endif // __MODULESCENEROUND1_H__