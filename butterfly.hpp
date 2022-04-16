#pragma once
#include <SDL.h>
#include "drawing.hpp"
#include "unit.hpp"

class Butterfly : public Unit
{
    int frame = 0;
    bool down;
    bool up;

public:
    void fly();
    Butterfly(int x, int y);
    void moveDown();
    void moveUp();
};
