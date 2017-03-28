#ifndef __IDLE_H__
#define __IDLE_H__

#include "State.h"

class PlayerFSM;
class Idle : public State
{
private:
	PlayerFSM *player_fsm;

public:
	Idle(PlayerFSM *player_fsm);
	~Idle();

	virtual void AttackPressed();
	virtual void AttackHold();
	virtual void JumpPressed();
	virtual void JumpHold();
	virtual void LeftPressed();
	virtual void LeftHold();
	virtual void RightPressed();
	virtual void RightHold();
	virtual void UpPressed();
	virtual void UpHold();
	virtual void DownPressed();
	virtual void DownHold();
	virtual void GoIdle();
};

#endif