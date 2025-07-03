#pragma once

class Classificavel
{
public:
  virtual ~Classificavel() = default;
  virtual bool maiorQue(Classificavel* outro) = 0;
};