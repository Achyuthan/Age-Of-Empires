#include "ScoutOwnedStates.h"
#include "State.h"
#include "Goat.h"

#include <iostream>
using std::cout;


//----------------------------------------methods for Graze state


Graze* Graze::Instance()
{
  static Graze instance;

  return &instance;
}

void Graze::Enter(Goat* goat)
{/*
  if (goat->Location() != goldmine)
  {
    cout << "\n" << GetNameOfEntity(goat->ID()) << ": " << "Walkin' to the goldmine";

    goat->ChangeLocation(goldmine);
  }*/
}


void Graze::Execute(Goat* goat)
{  /*
  goat->AddToGoldCarried(1);

  goat->IncreaseFatigue();

  cout << "\n" << GetNameOfEntity(goat->ID()) << ": " << "Pickin' up a nugget";

  if (goat->PocketsFull())
  {
    goat->GetFSM()->ChangeState(VisitBankAndDepositGold::Instance());
  }

  if (goat->Thirsty())
  {
    goat->GetFSM()->ChangeState(QuenchThirst::Instance());
  }*/
}


void Graze::Exit(Goat* goat)
{/*
  cout << "\n" << GetNameOfEntity(goat->ID()) << ": " 
       << "Ah'm leavin' the goldmine with mah pockets full o' sweet gold";*/
}


bool Graze::OnMessage(Goat* goat, const Telegram& msg)
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


//----------------------------------------methods for Escape state

Escape* Escape::Instance()
{
  static Escape instance;

  return &instance;
}

void Escape::Enter(Goat* goat)
{/*
  if (goat->Location() != goldmine)
  {
    cout << "\n" << GetNameOfEntity(goat->ID()) << ": " << "Walkin' to the goldmine";

    goat->ChangeLocation(goldmine);
  }*/
}


void Escape::Execute(Goat* goat)
{  /*
  goat->AddToGoldCarried(1);

  goat->IncreaseFatigue();

  cout << "\n" << GetNameOfEntity(goat->ID()) << ": " << "Pickin' up a nugget";

  if (goat->PocketsFull())
  {
    goat->GetFSM()->ChangeState(VisitBankAndDepositGold::Instance());
  }

  if (goat->Thirsty())
  {
    goat->GetFSM()->ChangeState(QuenchThirst::Instance());
  }*/
}


void Escape::Exit(Goat* goat)
{/*
  cout << "\n" << GetNameOfEntity(goat->ID()) << ": " 
       << "Ah'm leavin' the goldmine with mah pockets full o' sweet gold";*/
}

bool Escape::OnMessage(Goat* goat, const Telegram& msg)
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

//----------------------------------------methods for Die state
Die* Die::Instance()
{
  static Die instance;

  return &instance;
}

void Die::Enter(Goat* goat)
{/*
  if (goat->Location() != goldmine)
  {
    cout << "\n" << GetNameOfEntity(goat->ID()) << ": " << "Walkin' to the goldmine";

    goat->ChangeLocation(goldmine);
  }*/
}


void Die::Execute(Goat* goat)
{  /*
  goat->AddToGoldCarried(1);

  goat->IncreaseFatigue();

  cout << "\n" << GetNameOfEntity(goat->ID()) << ": " << "Pickin' up a nugget";

  if (goat->PocketsFull())
  {
    goat->GetFSM()->ChangeState(VisitBankAndDepositGold::Instance());
  }

  if (goat->Thirsty())
  {
    goat->GetFSM()->ChangeState(QuenchThirst::Instance());
  }*/
}


void Die::Exit(Goat* goat)
{/*
  cout << "\n" << GetNameOfEntity(goat->ID()) << ": " 
       << "Ah'm leavin' the goldmine with mah pockets full o' sweet gold";*/
}

bool Die::OnMessage(Goat* goat, const Telegram& msg)
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
