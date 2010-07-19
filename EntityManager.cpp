#include "EntityManager.h"
#include "BaseGameEntity.h"


//--------------------------- Instance ----------------------------------------
//
//   this class is a singleton
//-----------------------------------------------------------------------------
EntityManager* EntityManager::Instance()
{
  static EntityManager instance;

  return &instance;
}

//------------------------- GetEntityFromID -----------------------------------
//-----------------------------------------------------------------------------
BaseGameEntity* EntityManager::GetEntityFromID(int id)const
{
  //find the entity
  EntityMap::const_iterator ent = entityMap.find(id);

  //assert that the entity is a member of the map
  assert ( (ent !=  entityMap.end()) && "<EntityManager::GetEntityFromID>: invalid ID");

  return ent->second;
}

//--------------------------- RemoveEntity ------------------------------------
//-----------------------------------------------------------------------------
void EntityManager::RemoveEntity(BaseGameEntity* pEntity)
{    
  entityMap.erase(entityMap.find(pEntity->ID()));
} 

//---------------------------- RegisterEntity ---------------------------------
//-----------------------------------------------------------------------------
void EntityManager::RegisterEntity(BaseGameEntity* NewEntity)
{
  entityMap.insert(std::make_pair(NewEntity->ID(), NewEntity));
}
