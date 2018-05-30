#pragma once
#include "Unit.h"

class Input;

class CUnitState
{
public:
	CUnitState();
	~CUnitState();

	virtual void handleInput(CUnit& unit, Input* input) {}
	virtual void update(CUnit& unit) {}
};

