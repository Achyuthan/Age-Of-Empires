#include "SoldierOwnedStates.h"
#include "State.h"
#include "Soldier.h"

#include <iostream>
using std::cout;


//----------------------------------------methods for WaitForCommandSoldier state


WaitForCommandSoldier* WaitForCommandSoldier::Instance()
{
  static WaitForCommandSoldier instance;

  return &instance;
}

void WaitForCommandSoldier::Enter(Soldier* soldier)
{
  /*if (soldier->Location() != goldmine)
  {
    cout << "\n" << GetNameOfEntity(soldier->ID()) << ": " << "Walkin' to the goldmine";

    soldier->ChangeLocation(goldmine);
  }*/
}


void WaitForCommandSoldier::Execute(Soldier* soldier)
{  /*
  soldier->AddToGoldCarried(1);

  soldier->IncreaseFatigue();

  cout << "\n" << GetNameOfEntity(soldier->ID()) << ": " << "Pickin' up a nugget";

  if (soldier->PocketsFull())
  {
    soldier->GetFSM()->ChangeState(VisitBankAndDepositGold::Instance());
  }

  if (soldier->Thirsty())
  {
    soldier->GetFSM()->ChangeState(QuenchThirst::Instance());
  }*/
}


void WaitForCommandSoldier::Exit(Soldier* soldier)
{/*
  cout << "\n" << GetNameOfEntity(soldier->ID()) << ": " 
       << "Ah'm leavin' the goldmine with mah pockets full o' sweet gold";*/
}

bool WaitForCommandSoldier::OnMessage(Soldier* soldier, const Telegram& msg)
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


//----------------------------------------methods for Attack state
Attack* Attack::Instance()
{
  static Attack instance;

  return &instance;
}

void Attack::Enter(Soldier* soldier)
{/*
  if (soldier->Location() != goldmine)
  {
    cout << "\n" << GetNameOfEntity(soldier->ID()) << ": " << "Walkin' to the goldmine";

    soldier->ChangeLocation(goldmine);
  }*/
}


void Attack::Execute(Soldier* soldier)
{/*  
  soldier->AddToGoldCarried(1);

  soldier->IncreaseFatigue();

  cout << "\n" << GetNameOfEntity(soldier->ID()) << ": " << "Pickin' up a nugget";

  if (soldier->PocketsFull())
  {
    soldier->GetFSM()->ChangeState(VisitBankAndDepositGold::Instance());
  }

  if (soldier->Thirsty())
  {
    soldier->GetFSM()->ChangeState(QuenchThirst::Instance());
  }*/
}


void Attack::Exit(Soldier* soldier)
{/*
  cout << "\n" << GetNameOfEntity(soldier->ID()) << ": " 
       << "Ah'm leavin' the goldmine with mah pockets full o' sweet gold";*/
}

bool Attack::OnMessage(Soldier* soldier, const Telegram& msg)
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
