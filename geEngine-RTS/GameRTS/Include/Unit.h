#pragma once

#include "GameObject.h"
#include "UnitState.h"
#include <SFML/Graphics.hpp>

class CUnit : public CGameObject
{
public:
  CUnit();
  ~CUnit();

  virtual void handleInput(sf::Mouse input);
  
  virtual void update();

private:
  float m_hitPoints;
  float m_cost;
  CUnitState *m_state;


};