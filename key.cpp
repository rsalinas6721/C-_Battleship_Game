/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This contins the functions for the key class
*/

#include <iostream>
#include "key.hpp"

        // Constructor is declared.
        // Getter Setter functions are initiated.
Key::Key() : Space()
{

}

void Key::setNorth(Space* space)
{
    north = space;
}

Space* Key::getNorth()
{
    return north;
}
void Key::setEast(Space* space)
{
    east = space;
}

Space* Key::getEast()
{
    return east;
}

void Key::setSouth(Space* space)
{
    south = space;
}

Space* Key::getSouth()
{
    return south;
}

void Key::setWest(Space* space)
{
    west = space;
}

Space* Key::getWest()
{
    return west;
}

void Key::spaceDescription(Ship& p)
{
    std::cout << "You found a small chest." << std::endl;
}