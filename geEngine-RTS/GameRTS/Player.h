#pragma once
#include "RTSApplication.h"

class CPlayer
{
public:
  CPlayer();
  ~CPlayer();

private:
  short m_id();


  RTSWorld*
    getWorld() {
    return &m_gameWorld;
  }


  RTSWorld m_gameWorld;
};

CPlayer::CPlayer()
{
}

CPlayer::~CPlayer()
{
}