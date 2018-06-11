#pragma once
#include "RTSApplication.h"

class CPlayer
{
public:
  CPlayer();
  ~CPlayer();

public:
  short m_id;

  int m_wood;
  int m_aether;
  int m_metal;
  int m_food;
  int m_people;
  int m_happiness;



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