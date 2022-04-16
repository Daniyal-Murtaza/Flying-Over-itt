#pragma once
#include "pigeon.hpp"

// Sprite will form at x and y coordinates of screen
Pigeon::Pigeon(int x, int y) : Unit()
{
    Unit::srcRect = {7, 88, 160, 103};
    Unit::moverRect = {x, y, 50, 50};
}

void Pigeon::fly()
{
    // Sprite will flap it wings
    switch (frame)
    {
    case 0:
        srcRect = {7, 88, 155, 103};
        frame = 1;
        break;
    case 1:
        srcRect = {0, 237, 153, 84};
        frame = 2;
        break;
    case 2:
        srcRect = {2, 361, 159, 124};
        frame = 0;
        break;
    }

    // Sprite will rotate on this condition
    if (moverRect.x >= 1000)
    {
        moverRect.x = 0;
    }
    else
    {
        // Speed
        moverRect.x += 5;
    }
}
