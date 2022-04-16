#pragma once
#include <SDL.h>
#include "drawing.hpp"
#include "unit.hpp"

class Pigeon : public Unit
{
    int frame = 0;

public:
    void fly();
    Pigeon(int x, int y);
};
