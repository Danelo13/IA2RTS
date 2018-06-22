#include "Unit.h"



CUnit::CUnit() {}

CUnit::~CUnit() {}

void CUnit::handleInput(sf::Mouse input) {
  m_state->handleInput(*this, input);
}

void CUnit::update() {
  m_state->update();
}
