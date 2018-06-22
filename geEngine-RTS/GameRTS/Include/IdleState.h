#pragma once
#include "UnitState.h"
class CIdleState : public CUnitState
{
public:
  CIdleState();
  ~CIdleState();
  virtual void handleInput();
  virtual void update();
};
