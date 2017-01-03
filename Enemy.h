#ifndef __ENEMY_H__
#define __ENEMY_H__

#include "Animation.h"
#include <list>
#include "Entity.h"
#include "Point.h"

struct SDL_Texture;
class Enemy : public Entity {

public:
	Enemy(SDL_Texture *texture, const char *name, entity_type type, iPoint position, int depth);


public:
	bool m_dead;
	int m_life;
	Animation m_player_idle_right;
	Animation m_player_walk_right;
	Animation m_player_jump_right;
	Animation m_player_punch_combo_right;
	Animation m_player_back_punch_right;
	Animation m_player_air_kick_right;
	Animation m_player_grab_kick_head_combo_right;
	Animation m_player_grab_air_combo_right;

	Animation m_player_idle_left;
	Animation m_player_walk_left;
	Animation m_player_jump_left;
	Animation m_player_punch_combo_left;
	Animation m_player_back_punch_left;
	Animation m_player_air_kick_left;
	Animation m_player_grab_kick_head_combo_left;
	Animation m_player_grab_air_combo_left;

private:
	std::list<int*> m_animation_list;

};

#endif // !__ENEMY_H__

