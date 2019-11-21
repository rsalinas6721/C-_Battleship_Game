/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This contins the functions for the mine class
*/

#include <iostream>
#include "mine.hpp"

        // Constructor is declared.
        // Getter Setter functions are initiated.
Mine::Mine() : Space()
{

}

void Mine::setNorth(Space* space)
{
    north = space;
}

Space* Mine::getNorth()
{
    return north;
}
void Mine::setEast(Space* space)
{
    east = space;
}

Space* Mine::getEast()
{
    return east;
}

void Mine::setSouth(Space* space)
{
    south = space;
}

Space* Mine::getSouth()
{
    return south;
}

void Mine::setWest(Space* space)
{
    west = space;
}

Space* Mine::getWest()
{
    return west;
}

void Mine::spaceDescription(Ship& p)
{
    std::cout << "Boom! The Santa Maria hit a mine. The ship was slightly damaged." << std::endl;
    p.setHealth(p.getHealth() - 5);
    std::cout << "The health of the ship is now " << p.getHealth() << std::endl; 
}