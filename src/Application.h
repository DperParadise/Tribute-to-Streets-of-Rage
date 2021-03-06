#ifndef __APPLICATION_CPP__
#define __APPLICATION_CPP__

#include <list>
#include "Module.h"
#include "Globals.h"

class ModuleRender;
class ModuleWindow;
class ModuleTextures;
class ModuleInput;
class ModuleAudio;
class ModuleFadeToBlack;
class ModuleCollision;
class ModuleParticles;

// Game modules ---
class ModulePlayer;
class ModuleEnemies;
class ModuleTitle;
class ModuleSceneRound1;

class Entity;

class Application
{
public:

	Application();
	~Application();

	bool Init();
	update_status Update();
	bool CleanUp();

public:
	ModuleRender* renderer;
	ModuleWindow* window;
	ModuleTextures* textures;
	ModuleInput* input;
	ModuleAudio* audio;
	ModuleFadeToBlack* fade;
	ModuleCollision* collision;
	ModuleParticles* particles;

	// Game modules ---
	ModulePlayer* player;
	ModuleEnemies *enemies;
	ModuleTitle* title;
	ModuleSceneRound1* scene_round1;

private:

	std::list<Module*> modules;
};

extern Application* App;

#endif // __APPLICATION_CPP__