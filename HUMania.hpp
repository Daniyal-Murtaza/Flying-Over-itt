#pragma once
#include <SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include "ObjectCreator.hpp"
#include "unit.hpp"
#include <vector>
#include <list>
using namespace std;

class HUMania
{
    list<Unit *> animals;

public:
    void drawObjects();
    void createObject(int, int);
    void remove_unit(Unit *);
};