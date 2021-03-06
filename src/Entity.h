#ifndef __ENTITY_H__
#define __ENTITY_H__

#include "Point.h"

enum class entity_type
{
	HEALTH_CHICKEN,
	DESTROYABLE_ITEM,
	PLAYER,
	GARCIA,
	ANTONIO,
	PARTICLE_BOOMERANG,
	PARTICLE_HIT_EFFECT,
	SCENARIO,
	GUI
};

class Animation;
struct SDL_Texture;
class Entity {

public:
	Entity(SDL_Texture *texture, Animation *curr_anim, const char *name, entity_type type, iPoint position, int depth);
	Entity();
	virtual ~Entity();
	virtual void UpdateFSM();

	const char *name = nullptr;
	entity_type type;
	iPoint position = { 0,0 };
	int depth = 0;
	SDL_Texture *texture = nullptr;
	Animation *curr_anim = nullptr;
	bool destroy_this = false;
};



#endif // !ENTITY_H

