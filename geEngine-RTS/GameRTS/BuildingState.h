#pragma once
#include "UnitState.h"
class CBuildingState : public CUnitState
{
public:
  CBuildingState();
  ~CBuildingState();
  virtual void handleInput();
  virtual void update();
};

