#include "ScoutOwnedStates.h"
#include "State.h"
#include "Scout.h"

#include <iostream>
using std::cout;


//----------------------------------------methods for WaitForCommandScout state


WaitForCommandScout* WaitForCommandScout::Instance()
{
  static WaitForCommandScout instance;

  return &instance;
}

void WaitForCommandScout::Enter(Scout* scout)
{
/*  if (scout->Location() != goldmine)
  {
    cout << "\n" << GetNameOfEntity(scout->ID()) << ": " << "Walkin' to the goldmine";

    scout->ChangeLocation(goldmine);
  }*/
}


void WaitForCommandScout::Execute(Scout* scout)
{  
  /*scout->AddToGoldCarried(1);

  scout->IncreaseFatigue();

  cout << "\n" << GetNameOfEntity(scout->ID()) << ": " << "Pickin' up a nugget";

  if (scout->PocketsFull())
  {
    scout->GetFSM()->ChangeState(VisitBankAndDepositGold::Instance());
  }

  if (scout->Thirsty())
  {
    scout->GetFSM()->ChangeState(QuenchThirst::Instance());
  }*/
}


void WaitForCommandScout::Exit(Scout* scout)
{/*
  cout << "\n" << GetNameOfEntity(scout->ID()) << ": " 
       << "Ah'm leavin' the goldmine with mah pockets full o' sweet gold";*/
}

bool WaitForCommandScout::OnMessage(Scout* scout, const Telegram& msg)
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


//----------------------------------------methods for Wander state

Wander* Wander::Instance()
{
  static Wander instance;

  return &instance;
}

void Wander::Enter(Scout* scout)
{
	/*
  if (scout->Location() != goldmine)
  {
    cout << "\n" << GetNameOfEntity(scout->ID()) << ": " << "Walkin' to the goldmine";

    scout->ChangeLocation(goldmine);
  }*/
}


void Wander::Execute(Scout* scout)
{  
	/*
  scout->AddToGoldCarried(1);

  scout->IncreaseFatigue();

  cout << "\n" << GetNameOfEntity(scout->ID()) << ": " << "Pickin' up a nugget";

  if (scout->PocketsFull())
  {
    scout->GetFSM()->ChangeState(VisitBankAndDepositGold::Instance());
  }

  if (scout->Thirsty())
  {
    scout->GetFSM()->ChangeState(QuenchThirst::Instance());
  }*/
}


void Wander::Exit(Scout* scout)
{
  /*cout << "\n" << GetNameOfEntity(scout->ID()) << ": " 
       << "Ah'm leavin' the goldmine with mah pockets full o' sweet gold";*/
}

bool Wander::OnMessage(Scout* scout, const Telegram& msg)
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

//----------------------------------------methods for EnemySpotted state
EnemySpotted* EnemySpotted::Instance()
{
  static EnemySpotted instance;

  return &instance;
}

void EnemySpotted::Enter(Scout* scout)
{/*
  if (scout->Location() != goldmine)
  {
    cout << "\n" << GetNameOfEntity(scout->ID()) << ": " << "Walkin' to the goldmine";

    scout->ChangeLocation(goldmine);
  }*/
}


void EnemySpotted::Execute(Scout* scout)
{  /*
  scout->AddToGoldCarried(1);

  scout->IncreaseFatigue();

  cout << "\n" << GetNameOfEntity(scout->ID()) << ": " << "Pickin' up a nugget";

  if (scout->PocketsFull())
  {
    scout->GetFSM()->ChangeState(VisitBankAndDepositGold::Instance());
  }

  if (scout->Thirsty())
  {
    scout->GetFSM()->ChangeState(QuenchThirst::Instance());
  }*/
}


void EnemySpotted::Exit(Scout* scout)
{
  /*cout << "\n" << GetNameOfEntity(scout->ID()) << ": " 
       << "Ah'm leavin' the goldmine with mah pockets full o' sweet gold";*/
}

bool EnemySpotted::OnMessage(Scout* scout, const Telegram& msg)
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
