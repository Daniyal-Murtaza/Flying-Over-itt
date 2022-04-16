#pragma once
#include <iostream>
#include "HUMania.hpp"

// Drawing object
void HUMania::drawObjects()
{
    for (Unit *d : animals)
    {
        d->draw();
        d->fly();
    }
}

// Creating Object
void HUMania::createObject(int x, int y)
{
    ObjectCreator obj;
    Unit *a = obj.createObject(x, y);
    animals.push_back(a);
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
}

// Deleting
void HUMania::remove_unit(Unit *)
{
    for (Unit *d : animals)
    {
        delete d;
    }
    animals.clear();
}
