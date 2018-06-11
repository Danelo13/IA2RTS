
#pragma once
#include <SFML/Graphics.hpp>

class CUnit;

class UnitState
{
public:
  virtual ~UnitState() {}
  virtual void handleInput(CUnit& unit, sf::Mouse input) {}
  virtual void update() {}

};

class MovingState : public UnitState
{
  virtual void handleInput() {}
  virtual void update() {}
};

class IdleState : public UnitState
{
  virtual void handleInput() {}
  virtual void update() {}

};

class EscapeState : public UnitState
{
  virtual void handleInput() {}
  virtual void update() {}

};

class BuildingState : public UnitState
{
  virtual void handleInput() {}
  virtual void update() {}

};

class DeadState : public UnitState
{
  virtual void handleInput() {}
  virtual void update() {}

};

class FightingState : public UnitState
{
  virtual void handleInput() {}
  virtual void update() {}

};

class GatheringState : public UnitState
{
  virtual void handleInput() {}
  virtual void update() {}

};