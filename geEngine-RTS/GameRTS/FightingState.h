#pragma once
#include "UnitState.h"
class CFightingState: public CUnitState
{
public:
  CFightingState();
  ~CFightingState();
  virtual void handleInput();
  virtual void update();
};

