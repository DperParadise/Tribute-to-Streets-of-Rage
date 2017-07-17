#ifndef __GARCIA_H__
#define __GARCIA_H__

#include "Animation.h"
#include "Enemy.h"
#include <list>
#include "SDL/include/SDL.h"
#include "ModuleCollision.h"

class Animation;
class GarciaFSM;
class Player;
struct Collider;
struct CollisionInfo;
class Garcia : public Enemy
{

private:
	std::list<int*> animation_list;
	void LoadStats();
	void LoadGarciaAnimations();

public:
	Garcia(SDL_Texture *texture, Animation *curr_anim, const char *name, entity_type type, iPoint position, int depth);
	Garcia(const Garcia &garcia);
	virtual ~Garcia();
	virtual void UpdateFSM();
	virtual void OnCollision(const CollisionInfo &col_info_garcia, const CollisionInfo &col_info_other);
	void OnCollisionEnter(const CollisionInfo &col_info_garcia, const CollisionInfo &col_info_other);
	virtual void OnCollisionExit(const CollisionInfo &col_info_other);
	void SetPlayer(Player *player);
	void ApplyDamage(int damage);

	GarciaFSM *garcia_fsm = nullptr;
	int life = 100;
	bool destroy_this = false;
	iPoint speed_vect = { 1,1 };
	int speed = 0;
	Player *the_player = nullptr;
	size_t punch_hits = 0;

	int evasive_v_offset = 20;
	int evasive_h_offset = 120;
	bool evasive_started_facing_right = false;

	iPoint pos_before_knockdown;
	int down_count = 0;
	int down_frames = 20;
	int down_inflection = 10;
	bool up = false;

	// -------------- Offsets in somersault animation -> TODO:poner valores en el json
	iPoint start_pos = { 0,0 };
	bool offset_applied = false;
	bool offset_applied_2 = false;

	//right
	int offset_right_x_2 = 10;
	
	int offset_right_x_3 = 15;
	
	int offset_right_x_4 = 25;
	int offset_right_y_4 = 15;

	int offset_right_x_5 = 20;
	int offset_right_y_5 = 20;

	int offset_right_x_6 = 20;
	int offset_right_y_6 = 40;

	int offset_right_x_7 = 50;
	

	//left	
	int offset_left_x_3 = 15;

	int offset_left_x_4 = 40;
	int offset_left_y_4 = 15;

	int offset_left_x_5 = 65;
	int offset_left_y_5 = 20;

	int offset_left_x_6 = 20;
	int offset_left_y_6 = 40;

	int offset_left_x_7 = 50;
	
	//------------------- KNOCKDOWN MOVEMENT -------------------------

	bool bouncing_down = false;
	int bouncing_frames = 20;
	int bouncing_inflection = 10;
	int bouncing_frames_count = 0;

	//------------------------- DEAD BLINK EFFECT ---------------------------

	bool blink = true;
	int blink_counter = 0;
	int blink_wait_frames = 10;
	int blink_times_counter = 0;
	int blink_max_times = 5;
	
	// ----------------------------------  VARIABLES THAT CONTROL GARCIA FSM LOGIC -----------------------------------
	bool facing_right = false;
	bool idle = true;
	bool walk_left = false;
	bool walk_right = false;
	bool walk_up = false;
	bool walk_down = false;
	bool attack = false;
	bool evasive = false;
	bool damaged = false;
	bool knocked_down = false;
	bool grabbed = false;
	bool player_in_sight = true; // test

	
	//---------------------------------------- GARCIA ANIMATIONS ---------------------------------------------
	Animation garcia_idle_right;
	Animation garcia_idle_left;

	Animation garcia_walk_right;
	Animation garcia_walk_left;

	Animation garcia_punch_right1;
	Animation garcia_punch_right2;

	Animation garcia_punch_left1;
	Animation garcia_punch_left2;

	Animation garcia_damaged_right;
	Animation garcia_damaged_left;

	Animation garcia_down_right1;
	Animation garcia_down_left1;

	Animation garcia_down_right2;
	Animation garcia_down_left2;

	Animation garcia_up_right;
	Animation garcia_up_left;

	Animation garcia_grabbed_right;
	Animation garcia_grabbed_left;

	Animation garcia_grabbed_finisher_right;
	Animation garcia_grabbed_finisher_left;

	Animation garcia_grabbed_finisher_horiz_right;
	Animation garcia_grabbed_finisher_horiz_left;

	Animation garcia_grabbed_finisher_vert_right;
	Animation garcia_grabbed_finisher_vert_left;

	Animation garcia_dead_blink_effect;
};


#endif
