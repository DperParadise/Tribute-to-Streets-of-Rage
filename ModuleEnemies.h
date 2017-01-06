#ifndef __ModuleEnemies_H__
#define __ModuleEnemies_H__

#include "Module.h"
#include "Animation.h"
#include "Point.h"
#include "ModuleCollision.h"
#include "Player.h"
#include "Enemy.h"

struct SDL_Texture;


class ModuleEnemies : public Module
{
public:
	ModuleEnemies(bool active = true);
	~ModuleEnemies();

	bool Start();
	update_status Update();
	bool CleanUp();
	void OnCollision(Collider* collider1, Collider* collider2);

	SDL_Texture *graphics;
	Enemy *enemy = nullptr; 
	Collider* playerCollider;
	Player *player = nullptr;
	
	
private:	
	Uint32 time = 0;
	Uint32 update_time = 0;
	Uint32 dt = 10;
	bool do_logic = true;



};

#endif