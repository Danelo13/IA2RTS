#pragma once
#include "UnitState.h"
class CEscapeState : public CUnitState
{
public:
  CEscapeState();
  ~CEscapeState();
  virtual void handleInput();
  virtual void update();
};

