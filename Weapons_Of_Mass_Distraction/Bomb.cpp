#include "Bomb.h"
#include <iostream>

Bomb::Bomb()
{
}

Bomb::~Bomb()
{
}

void Bomb::set_radius(int r)
{
    radius = r;
}

void Bomb::set_location(int x, int y)
{
    location[0] = x;
    location[1] = y;
}

void Bomb::print_transform()
{
        std::cout << radius << " "
            << location[0] << " "
                << location[1]
                    << std::endl;
}

int Bomb::get_radius()
{
    return radius;
}

float Bomb::get_x()
{
    return location[0];
}

float Bomb::get_y()
{
    return location[1];
}
