#include "Soldier.h"

bool Soldier::HandleMessage(const Telegram& msg)
{
  return stateMachine->HandleMessage(msg);
}

//------------------------------------------------s-----------------------------
void Soldier::Update()
{
  stateMachine->Update();
}

