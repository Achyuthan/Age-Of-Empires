#include "Goat.h"

bool Goat::HandleMessage(const Telegram& msg)
{
  return stateMachine->HandleMessage(msg);
}

//-----------------------------------------------------------------------------
void Goat::Update()
{
  stateMachine->Update();
}
