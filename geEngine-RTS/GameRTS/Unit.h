#pragma once

#include "GameObject.h"
#include "UnitState.h"
#include <SFML/Graphics.hpp>

class CUnit : public CGameObject
{
public:
  CUnit();
  ~CUnit();

  virtual void handleInput(sf::Mouse input) {
    m_state->handleInput(*this, input);
  }
  virtual void update() {
    m_state->update();
  }

private:
  float m_HitPoints;
  float m_cost;
  UnitState *m_state;


};

CUnit::CUnit() {}

CUnit::~CUnit() {}