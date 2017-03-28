#ifndef __GRAB_H__
#define __GRAB_H__

#include "State.h"

class PlayerFSM;
class Grab : public State
{
private:
	PlayerFSM *player_fsm;

public:
	Grab(PlayerFSM *fsm);
	~Grab();

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
