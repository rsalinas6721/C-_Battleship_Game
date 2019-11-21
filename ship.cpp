/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This contins the functions for the ship class
*/

#include <iostream>
#include "ship.hpp"

        // Constructor is declared.
        // Getter Setter functions are initiated.
        // Health used to track conditon of ship.
        // Container used to track key quantity.
Ship::Ship()
{
    health = 100;
    container[0] = 0;
    container[1] = 0;
    container[2] = 0;
}

int Ship::getHealth()
{
    return health;
}

void Ship::setHealth(int h)
{
    health = h;
}

void Ship::setContainer()
{
    if (container[0] == 0)
    {
        container[0] = 1;
        std::cout << "Key pieces: 1" << std::endl;
    }
    
    else if (container[1] == 0)
    {
        container[1] = 1;
        std::cout << "Key pieces: 2" << std::endl;
    }
    
    else if (container[2] == 0)
    {
        container[2] = 1;
        std::cout << "Key pices: 3" << std::endl;
        std::cout << "You forged a key!" << std::endl;
    }
}

int Ship::getContainer()
{
    return container[2];
}


    