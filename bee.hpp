#pragma once
#include <SDL.h>
#include "drawing.hpp"
#include "unit.hpp"

class Bee : public Unit
{
    int frame = 0;
    bool hover = false;
    int counter = 0;

public:
    void fly();
    Bee(int x, int y);
};
