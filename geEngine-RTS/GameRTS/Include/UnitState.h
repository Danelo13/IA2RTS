#pragma once
#include <SFML/Graphics.hpp>

class CUnit;

class CUnitState
{
public:
  CUnitState();
  virtual ~CUnitState();
  virtual void handleInput(CUnit& unit, sf::Mouse input) {}
  virtual void update() {}

};
