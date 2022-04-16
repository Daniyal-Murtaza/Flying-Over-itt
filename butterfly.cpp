#pragma once
#include "butterfly.hpp"

// Sprite will form at x and y coordinates of screen
Butterfly::Butterfly(int x, int y) : Unit()
{
    Unit::srcRect = {256, 24, 174, 134};
    Unit::moverRect = {x, y, 50, 50};
}

// Sprite move down
void Butterfly::moveDown()
{
    moverRect.x += 5;
    moverRect.y += 5;
}

// Sprite move up
void Butterfly::moveUp()
{
    moverRect.x += 5;
    moverRect.y -= 5;
}

void Butterfly::fly()
{
    // Sprite will flap it wings
    switch (frame)
    {
    case 0:
        srcRect = {256, 24, 174, 134};
        frame = 1;
        break;
    case 1:
        srcRect = {257, 182, 192, 214};
        frame = 2;
        break;
    case 2:
        srcRect = {248, 433, 247, 178};
        frame = 0;
        break;
    }

    // moving up or down
    if (down == true)
    {
        moveDown();
    }
    else if (down == false)
    {
        moveUp();
    }

    // moving upright or downright after collision with upper or lower boundary
    if (moverRect.y >= 600)
    {
        moverRect.y -= 10;
        down = false;
    }
    if (moverRect.y <= 0)
    {
        moverRect.y += 10;
        down = true;
    }

    // rotate sprite
    if (moverRect.x >= 1000)
    {
        moverRect.x = 0;
    }
}
