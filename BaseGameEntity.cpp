#include "BaseGameEntity.h"
#include <cassert>



int BaseGameEntity::NextValidID = 0;

void BaseGameEntity::SetID(int val)
{
  //make sure the val is equal to or greater than the next available ID
  assert ( (val >= NextValidID) && "<BaseGameEntity::SetID>: invalid ID");

  id = val;
    
  NextValidID = id + 1;
}

inline void BaseGameEntity::SetType(int val)
{
	type = val ;
}

inline void BaseGameEntity::SetisResource(bool val)
{
	isResource = val ;
}

inline void BaseGameEntity::SetResourceType(int val)
{
	resourceType = val ;
}

inline void BaseGameEntity::SetResourceAmount(int val)
{
	resourceAmount = val ;
}

inline void BaseGameEntity::SetTileX(int val)
{
	tilex = val ;
}

inline void BaseGameEntity::SetTileY(int val)
{
	tiley = val ;
}