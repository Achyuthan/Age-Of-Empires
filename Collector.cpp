#include "Collector.h"

bool Collector::HandleMessage(const Telegram& msg)
{
  return stateMachine->HandleMessage(msg);
}

//-----------------------------------------------------------------------------
void Collector::Update()
{
  stateMachine->Update();
}
