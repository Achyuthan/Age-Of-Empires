#include "ResourceManager.h"

//--------------------------- Instance ----------------------------------------
//
//   this class is a singleton
//-----------------------------------------------------------------------------
ResourceManager* ResourceManager::Instance()
{
  static ResourceManager instance;

  return &instance;
}
