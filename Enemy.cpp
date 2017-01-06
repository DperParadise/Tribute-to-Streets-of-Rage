#include "Enemy.h"
#include "JSONDataLoader.h"
#include "Utilities.h"

Enemy::Enemy(SDL_Texture *texture, const char *name, entity_type type, iPoint position, int depth) : Entity(texture, name, type, position, depth), m_dead(false), m_life(100) 
{

	if (!strcmp(name, "garcia"))
	{

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaIdleRight", m_animation_list, m_npc_garcia_idle_right);
		m_npc_garcia_idle_right.loop = false;
		m_npc_garcia_idle_right.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaIdleLeft", m_animation_list, m_npc_garcia_idle_left);
		m_npc_garcia_idle_left.loop = false;
		m_npc_garcia_idle_left.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaWalkRight", m_animation_list, m_npc_garcia_walk_right);
		m_npc_garcia_walk_right.loop = true;
		m_npc_garcia_walk_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaWalkLeft", m_animation_list, m_npc_garcia_walk_left);
		m_npc_garcia_walk_left.loop = true;
		m_npc_garcia_walk_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaPunchRight1", m_animation_list, m_npc_garcia_punch_right1);
		m_npc_garcia_punch_right1.loop = false;
		m_npc_garcia_punch_right1.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaPunchRight2", m_animation_list, m_npc_garcia_punch_right2);
		m_npc_garcia_punch_right2.loop = false;
		m_npc_garcia_punch_right2.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaPunchLeft1", m_animation_list, m_npc_garcia_punch_left1);
		m_npc_garcia_punch_left1.loop = false;
		m_npc_garcia_punch_left1.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaPunchLeft2", m_animation_list, m_npc_garcia_punch_left2);
		m_npc_garcia_punch_left2.loop = false;
		m_npc_garcia_punch_left2.speed = 0.1f;
		Utilities::free_list(m_animation_list);

	}

	if (!strcmp(name, "garcia_knife"))
	{
		
		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaKnifeIdleRight", m_animation_list, m_npc_garcia_knife_idle_right);
		m_npc_garcia_knife_idle_right.loop = false;
		m_npc_garcia_knife_idle_right.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaKnifeIdleLeft", m_animation_list, m_npc_garcia_knife_idle_left);
		m_npc_garcia_knife_idle_left.loop = false;
		m_npc_garcia_knife_idle_left.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaKnifeWalkRight", m_animation_list, m_npc_garcia_knife_walk_right);
		m_npc_garcia_knife_walk_right.loop = true;
		m_npc_garcia_knife_walk_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaKnifeWalkLeft", m_animation_list, m_npc_garcia_knife_walk_left);
		m_npc_garcia_knife_walk_left.loop = true;
		m_npc_garcia_knife_walk_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);
		
		
		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaKnifeAttackRight", m_animation_list, m_npc_garcia_knife_attack_right);
		m_npc_garcia_knife_attack_right.loop = false;
		m_npc_garcia_knife_attack_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcGarciaKnifeAttackLeft", m_animation_list, m_npc_garcia_knife_attack_left);
		m_npc_garcia_knife_attack_left.loop = false;
		m_npc_garcia_knife_attack_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);
	}

	if (!strcmp(name, "punky"))
	{
		JSONDataLoader::Load("assets/json/sprites_data.json", "npcPunkyIdleRight", m_animation_list, m_npc_punky_idle_right);
		m_npc_punky_idle_right.loop = false;
		m_npc_punky_idle_right.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcPunkyIdleLeft", m_animation_list, m_npc_punky_idle_left);
		m_npc_punky_idle_left.loop = false;
		m_npc_punky_idle_left.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcPunkyWalkRight", m_animation_list, m_npc_punky_walk_right);
		m_npc_punky_walk_right.loop = true;
		m_npc_punky_walk_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcPunkyWalkLeft", m_animation_list, m_npc_punky_walk_left);
		m_npc_punky_walk_left.loop = true;
		m_npc_punky_walk_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcPunkyGroundAttackRight", m_animation_list, m_npc_punky_ground_attack_right);
		m_npc_punky_ground_attack_right.loop = false;
		m_npc_punky_ground_attack_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcPunkyGroundAttackLeft", m_animation_list, m_npc_punky_ground_attack_left);
		m_npc_punky_ground_attack_left.loop = false;
		m_npc_punky_ground_attack_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);
	}

	if (!strcmp(name, "nora"))
	{
		JSONDataLoader::Load("assets/json/sprites_data.json", "npcNoraIdleRight", m_animation_list, m_npc_nora_idle_right);
		m_npc_nora_idle_right.loop = false;
		m_npc_nora_idle_right.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcNoraIdleLeft", m_animation_list, m_npc_nora_idle_left);
		m_npc_nora_idle_left.loop = false;
		m_npc_nora_idle_left.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcNoraWalkRight", m_animation_list, m_npc_nora_walk_right);
		m_npc_nora_walk_right.loop = true;
		m_npc_nora_walk_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcNoraWalkLeft", m_animation_list, m_npc_nora_walk_left);
		m_npc_nora_walk_left.loop = true;
		m_npc_nora_walk_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcNoraAttackRight", m_animation_list, m_npc_nora_attack_right);
		m_npc_nora_attack_right.loop = false;
		m_npc_nora_attack_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcNoraAttackLeft", m_animation_list, m_npc_nora_attack_left);
		m_npc_nora_attack_left.loop = false;
		m_npc_nora_attack_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);

	}

	if (!strcmp(name, "antonio"))
	{
		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioBoomerangIdleRight", m_animation_list, m_npc_antonio_boomerang_idle_right);
		m_npc_antonio_boomerang_idle_right.loop = false;
		m_npc_antonio_boomerang_idle_right.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioIdleRight", m_animation_list, m_npc_antonio_idle_right);
		m_npc_antonio_boomerang_idle_right.loop = false;
		m_npc_antonio_boomerang_idle_right.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioBoomerangIdleLeft", m_animation_list, m_npc_antonio_boomerang_idle_left);
		m_npc_antonio_boomerang_idle_left.loop = false;
		m_npc_antonio_boomerang_idle_left.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioIdleLeft", m_animation_list, m_npc_antonio_idle_left);
		m_npc_antonio_idle_left.loop = false;
		m_npc_antonio_idle_left.speed = 1.0f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioBoomerangWalkRight", m_animation_list, m_npc_antonio_boomerang_walk_right);
		m_npc_antonio_boomerang_walk_right.loop = true;
		m_npc_antonio_boomerang_walk_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioWalkRight", m_animation_list, m_npc_antonio_walk_right);
		m_npc_antonio_walk_right.loop = true;
		m_npc_antonio_walk_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioBoomerangWalkLeft", m_animation_list, m_npc_antonio_boomerang_walk_left);
		m_npc_antonio_boomerang_walk_left.loop = true;
		m_npc_antonio_boomerang_walk_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);
		
		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioWalkLeft", m_animation_list, m_npc_antonio_walk_left);
		m_npc_antonio_walk_left.loop = true;
		m_npc_antonio_walk_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioKickRight", m_animation_list, m_npc_antonio_kick_right);
		m_npc_antonio_kick_right.loop = false;
		m_npc_antonio_kick_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioKickLeft", m_animation_list, m_npc_antonio_kick_left);
		m_npc_antonio_kick_left.loop = false;
		m_npc_antonio_kick_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioThrowBoomerangRight", m_animation_list, m_npc_antonio_throw_boomerang_right);
		m_npc_antonio_throw_boomerang_right.loop = false;
		m_npc_antonio_throw_boomerang_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioThrowBoomerangLeft", m_animation_list, m_npc_antonio_throw_boomerang_left);
		m_npc_antonio_throw_boomerang_left.loop = false;
		m_npc_antonio_throw_boomerang_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioRecoverBoomerangRight", m_animation_list, m_npc_antonio_recover_boomerang_right);
		m_npc_antonio_recover_boomerang_right.loop = false;
		m_npc_antonio_recover_boomerang_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcAntonioRecoverBoomerangLeft", m_animation_list, m_npc_antonio_recover_boomerang_left);
		m_npc_antonio_recover_boomerang_left.loop = false;
		m_npc_antonio_recover_boomerang_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcItemBoomerangRight1", m_animation_list, m_npc_item_boomerang_right1);
		m_npc_item_boomerang_right1.loop = false;
		m_npc_item_boomerang_right1.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcItemBoomerangRight2", m_animation_list, m_npc_item_boomerang_right2);
		m_npc_item_boomerang_right2.loop = false;
		m_npc_item_boomerang_right2.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcItemBoomerangRight3", m_animation_list, m_ncp_item_boomerang_right3);
		m_ncp_item_boomerang_right3.loop = false;
		m_ncp_item_boomerang_right3.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcItemBoomerangRight4", m_animation_list, m_npc_item_boomerang_right4);
		m_npc_item_boomerang_right4.loop = false;
		m_npc_item_boomerang_right4.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcBoomerangShadowRight", m_animation_list, m_npc_boomerang_shadow_right);
		m_npc_boomerang_shadow_right.loop = false;
		m_npc_boomerang_shadow_right.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcItemBoomerangLeft1", m_animation_list, m_npc_item_boomerang_left1);
		m_npc_item_boomerang_left1.loop = false;
		m_npc_item_boomerang_left1.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcItemBoomerangLeft2", m_animation_list, m_npc_item_boomerang_left2);
		m_npc_item_boomerang_left2.loop = false;
		m_npc_item_boomerang_left2.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcItemBoomerangLeft3", m_animation_list, m_ncp_item_boomerang_left3);
		m_ncp_item_boomerang_left3.loop = false;
		m_ncp_item_boomerang_left3.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcItemBoomerangLeft4", m_animation_list, m_npc_item_boomerang_left4);
		m_npc_item_boomerang_left4.loop = false;
		m_npc_item_boomerang_left4.speed = 0.1f;
		Utilities::free_list(m_animation_list);

		JSONDataLoader::Load("assets/json/sprites_data.json", "npcBoomerangShadowRight", m_animation_list, m_npc_boomerang_shadow_left);
		m_npc_boomerang_shadow_left.loop = false;
		m_npc_boomerang_shadow_left.speed = 0.1f;
		Utilities::free_list(m_animation_list);

	}


}

void Enemy::AdvanceAnimation(size_t initial_sprite_duration, Animation *next_anim_sprite, bool restart_animation)
{
	m_timer_count += m_timer_speed;

	if (m_timer_count >= initial_sprite_duration)
	{
		m_current_animation = next_anim_sprite;
		m_restart_animation = restart_animation;
		m_timer_count = 0;
	}
}