#pragma once
#include "UnitState.h"
class CGatheringState: public CUnitState
{
public:
  CGatheringState();
  ~CGatheringState();
  virtual void handleInput();
  virtual void update();
};

