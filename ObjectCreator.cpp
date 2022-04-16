#pragma once
#include "ObjectCreator.hpp"
using namespace std;

// Random function generator
Unit *ObjectCreator::createObject(int x, int y)
{
    int random = rand() % 3;

    // For pigeon
    if (random == 0)
    {
        Unit *temp = new Pigeon(x, y);
        return temp;
    }

    // For Bee
    else if (random == 1)
    {
        Unit *temp = new Bee(x, y);
        return temp;
    }

    // For Butterfly
    else if (random == 2)
    {
        Unit *temp = new Butterfly(x, y);
        return temp;
    }
}