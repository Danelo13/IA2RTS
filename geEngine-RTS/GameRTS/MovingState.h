#pragma once
#include "UnitState.h"
class CMovingState : public CUnitState
{
public:
  CMovingState();
  ~CMovingState();
  virtual void handleInput();
  virtual void update();
};

