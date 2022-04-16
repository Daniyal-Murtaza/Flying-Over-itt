#pragma once
#include "Unit.hpp"
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"

class ObjectCreator
{
public:
    Unit *createObject(int x, int y);
};