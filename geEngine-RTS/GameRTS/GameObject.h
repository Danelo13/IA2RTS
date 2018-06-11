#pragma once

#include <gePrerequisitesUtil.h>
#include <geVector3.h>


using namespace geEngineSDK;

class CGameObject
{
public:
  virtual void
    handleimput() = 0;

  virtual void
    init() = 0;

  virtual void
    update() = 0;

  virtual void
    UDraw() = 0;

  Vector3 m_Position;
};