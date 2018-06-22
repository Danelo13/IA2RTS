#pragma once
#include "UnitState.h"
class CDeadState : public CUnitState
{
public:
  CDeadState();
  ~CDeadState();
  virtual void handleInput();
  virtual void update();
};

