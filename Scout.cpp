#include "Scout.h"

bool Scout::HandleMessage(const Telegram& msg)
{
  return stateMachine->HandleMessage(msg);
}

//-----------------------------------------------------------------------------
void Scout::Update()
{
  stateMachine->Update();
}
