#pragma once
#include <iostream>
#include "bee.hpp"
using namespace std;

// Sprite will form at x and y coordinates of screen
Bee::Bee(int x, int y) : Unit()
{
    Unit::srcRect = {63, 619, 151, 166};
    Unit::moverRect = {x, y, 50, 50};
}

void Bee::fly()
{
    // Sprite will flap it wings
    switch (frame)
    {
    case 0:
        srcRect = {63, 619, 151, 166};
        frame = 1;
        break;
    case 1:
        srcRect = {234, 630, 163, 162};
        frame = 2;
        break;
    case 2:
        srcRect = {409, 650, 171, 147};
        frame = 0;
        break;
    }

    // 1% probability of sprite for hovering
    if (hover == true && counter != 10)
    {
        counter++;
    }
    else if (hover == true && counter == 10)
    {
        hover = false;
        counter = 0;
    }

    if (hover == false)
    {
        int r = (rand() % 100) + 1;
        cout << r << endl;
        if (r == 1)
        {
            hover = true;
        }
    }

    // Sprite will rotate on this condition
    if (hover == false)
    {
        moverRect.x += 3;
    }
    if (moverRect.x >= 1000)
    {
        moverRect.x = 0;
    }
}
