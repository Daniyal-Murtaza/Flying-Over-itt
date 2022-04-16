#include "unit.hpp"
#include <iostream>
using namespace std;

Unit::Unit(){};

void Unit::fly(){};

// Drawing object
void Unit::draw()
{
    fly();
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}
