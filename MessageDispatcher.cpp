#include "MessageDispatcher.h"
#include "BaseGameEntity.h"
//#include "Time/CrudeTimer.h"
#include "EntityManager.h"
#include "EntityNames.h"

#include <iostream>
using std::cout;

using std::set;

//------------------------------ Instance -------------------------------------

MessageDispatcher* MessageDispatcher::Instance()
{
  static MessageDispatcher instance;

  return &instance;
}


void MessageDispatcher::Discharge(BaseGameEntity* pReceiver,
                                  const Telegram& telegram)
{
  if (!pReceiver->HandleMessage(telegram))
  {
    //telegram could not be handled
    cout << "Message not handled";
  }
}

void MessageDispatcher::DispatchMessage(double  delay,
                                        int    sender,
                                        int    receiver,
										std::string    msg,
                                        void*  ExtraInfo)
{

  //get pointers to the sender and receiver
  BaseGameEntity* pSender   = EntityMgr->GetEntityFromID(sender);
  BaseGameEntity* pReceiver = EntityMgr->GetEntityFromID(receiver);

  //make sure the receiver is valid
  if (pReceiver == NULL)
  {
    cout << "\nWarning! No Receiver with ID of " << receiver << " found";

    return;
  }
  
  //create the telegram
  Telegram telegram(0, sender, receiver, msg, ExtraInfo);
  
  //if there is no delay, route telegram immediately                       
  if (delay <= 0.0f)                                                        
  {
    cout << "\nInstant telegram dispatched at time: " 
         << " by " << GetNameOfEntity(pSender->ID()) << " for " << GetNameOfEntity(pReceiver->ID()) 
         << ". Msg is "<< msg.c_str();

    //send the telegram to the recipient
    Discharge(pReceiver, telegram);
  }

  //else calculate the time when the telegram should be dispatched
  else
  {
    double CurrentTime = 0.0;//Clock->GetCurrentTime(); 

    telegram.DispatchTime = CurrentTime + delay;

    //and put it in the queue
    PriorityQ.insert(telegram);   

    cout << "\nDelayed telegram from " << GetNameOfEntity(pSender->ID()) << " recorded at time " 
             << " for " << GetNameOfEntity(pReceiver->ID())
            << ". Msg is "<< msg.c_str();
            
  }
}


//---------------------- DispatchDelayedMessages -------------------------
//
//  This function dispatches any telegrams with a timestamp that has
//  expired. Any dispatched telegrams are removed from the queue
//------------------------------------------------------------------------
void MessageDispatcher::DispatchDelayedMessages()
{
  
  //get current time
  double CurrentTime = 0.0;//Clock->GetCurrentTime();

  //now peek at the queue to see if any telegrams need dispatching.
  //remove all telegrams from the front of the queue that have gone
  //past their sell by date
  while( !PriorityQ.empty() &&
         (PriorityQ.begin()->DispatchTime < CurrentTime) && 
         (PriorityQ.begin()->DispatchTime > 0) )
  {
    //read the telegram from the front of the queue
    const Telegram& telegram = *PriorityQ.begin();

    //find the recipient
    BaseGameEntity* pReceiver = EntityMgr->GetEntityFromID(telegram.Receiver);

    cout << "\nQueued telegram ready for dispatch: Sent to " 
         << GetNameOfEntity(pReceiver->ID()) << ". Msg is " << telegram.Msg.c_str();

    //send the telegram to the recipient
    Discharge(pReceiver, telegram);

    //remove it from the queue
    PriorityQ.erase(PriorityQ.begin());
  }
}



