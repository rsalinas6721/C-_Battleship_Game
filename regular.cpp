/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This contins the functions for the regular class
*/

#include <iostream>
#include "regular.hpp"

        // Constructor is declared.
        // Getter Setter functions are initiated.
Regular::Regular() : Space()
{

}

void Regular::setNorth(Space* space)
{
    north = space;
}

Space* Regular::getNorth()
{
    return north;
}
void Regular::setEast(Space* space)
{
    east = space;
}

Space* Regular::getEast()
{
    return east;
}

void Regular::setSouth(Space* space)
{
    south = space;
}

Space* Regular::getSouth()
{
    return south;
}

void Regular::setWest(Space* space)
{
    west = space;
}

Space* Regular::getWest()
{
    return west;
}

void Regular::spaceDescription(Ship& p)
{
    std::cout << "The Santa Maria is sailing smoothly through these waters." << std::endl;
}