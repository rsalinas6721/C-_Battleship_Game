/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This is the Treasure class
*/

#ifndef TREASURE_HPP
#define TREASURE_HPP
#include "space.hpp"
#include "ship.hpp"

        // Treasure class is initiated.
class Treasure : public Space
{
protected:
    Space *north;
    Space *east;
    Space *south;
    Space *west;
    Space *currentSpace;

public:
    Treasure();
    void setNorth(Space*);
    Space* getNorth();
    void setEast(Space*);
    Space* getEast();
    void setSouth(Space*);
    Space* getSouth();
    void setWest(Space*);
    Space* getWest();
    void spaceDescription(Ship&);
};
#endif