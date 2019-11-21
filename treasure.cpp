/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This contins the functions for the treasure class
*/

#include <iostream>
#include "treasure.hpp"

        // Constructor is declared.
        // Getter Setter functions are initiated.
Treasure::Treasure() : Space()
{

}

void Treasure::setNorth(Space* space)
{
    north = space;
}

Space* Treasure::getNorth()
{
    return north;
}
void Treasure::setEast(Space* space)
{
    east = space;
}

Space* Treasure::getEast()
{
    return east;
}

void Treasure::setSouth(Space* space)
{
    south = space;
}

Space* Treasure::getSouth()
{
    return south;
}

void Treasure::setWest(Space* space)
{
    west = space;
}

Space* Treasure::getWest()
{
    return west;
}

void Treasure::spaceDescription(Ship& p)
{
    std::cout << "You found the burried treasure of Pirate Red Beard!" << std::endl;
}