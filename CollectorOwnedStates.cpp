#include "CollectorOwnedStates.h"
#include "State.h"
//#include "Collector.h"

#include <iostream>
using std::cout;


//----------------------------------------methods for Hunt state


Hunt* Hunt::Instance()
{
  static Hunt instance;

  return &instance;
}

void Hunt::Enter(Collector* collector)
{/*
  if (collector->Location() != goldmine)
  {
    cout << "\n" << GetNameOfEntity(collector->ID()) << ": " << "Walkin' to the goldmine";

    collector->ChangeLocation(goldmine);
  }*/
}


void Hunt::Execute(Collector* collector)
{/*  
  collector->AddToGoldCarried(1);

  collector->IncreaseFatigue();

  cout << "\n" << GetNameOfEntity(collector->ID()) << ": " << "Pickin' up a nugget";

  if (collector->PocketsFull())
  {
    collector->GetFSM()->ChangeState(VisitBankAndDepositGold::Instance());
  }

  if (collector->Thirsty())
  {
    collector->GetFSM()->ChangeState(QuenchThirst::Instance());
  }*/
}


void Hunt::Exit(Collector* collector)
{/*
  cout << "\n" << GetNameOfEntity(collector->ID()) << ": " 
       << "Ah'm leavin' the goldmine with mah pockets full o' sweet gold";*/
}

bool Hunt::OnMessage(Collector* collector, const Telegram& msg)
{
   /*SetTextColor(BACKGROUND_RED|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);

   switch(msg.Msg)
   {
   case Msg_StewReady:

     cout << "\nMessage handled by " << GetNameOfEntity(pMiner->ID()) 
     << " at time: " << Clock->GetCurrentTime();

     SetTextColor(FOREGROUND_RED|FOREGROUND_INTENSITY);

     cout << "\n" << GetNameOfEntity(pMiner->ID()) 
          << ": Okay Hun, ahm a comin'!";

     pMiner->GetFSM()->ChangeState(EatStew::Instance());
      
     return true;

   }//end switch
*/
   return false; //send message to global message handler
}


//----------------------------------------methods for ReturnToHouse state
ReturnToHouse* ReturnToHouse::Instance()
{
  static ReturnToHouse instance;

  return &instance;
}

void ReturnToHouse::Enter(Collector* collector)
{/*
  if (collector->Location() != goldmine)
  {
    cout << "\n" << GetNameOfEntity(collector->ID()) << ": " << "Walkin' to the goldmine";

    collector->ChangeLocation(goldmine);
  }*/
}


void ReturnToHouse::Execute(Collector* collector)
{ /* 
  collector->AddToGoldCarried(1);

  collector->IncreaseFatigue();

  cout << "\n" << GetNameOfEntity(collector->ID()) << ": " << "Pickin' up a nugget";

  if (collector->PocketsFull())
  {
    collector->GetFSM()->ChangeState(VisitBankAndDepositGold::Instance());
  }

  if (collector->Thirsty())
  {
    collector->GetFSM()->ChangeState(QuenchThirst::Instance());
  }*/
}


void ReturnToHouse::Exit(Collector* collector)
{/*
  cout << "\n" << GetNameOfEntity(collector->ID()) << ": " 
       << "Ah'm leavin' the goldmine with mah pockets full o' sweet gold";*/
}

bool ReturnToHouse::OnMessage(Collector* collector, const Telegram& msg)
{
   /*SetTextColor(BACKGROUND_RED|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);

   switch(msg.Msg)
   {
   case Msg_StewReady:

     cout << "\nMessage handled by " << GetNameOfEntity(pMiner->ID()) 
     << " at time: " << Clock->GetCurrentTime();

     SetTextColor(FOREGROUND_RED|FOREGROUND_INTENSITY);

     cout << "\n" << GetNameOfEntity(pMiner->ID()) 
          << ": Okay Hun, ahm a comin'!";

     pMiner->GetFSM()->ChangeState(EatStew::Instance());
      
     return true;

   }//end switch
*/
   return false; //send message to global message handler
}
