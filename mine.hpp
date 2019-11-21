/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This is the Mine class
*/

#ifndef MINE_HPP
#define MINE_HPP
#include "space.hpp"
#include "ship.hpp"

        // Mine class is initiated.
class Mine : public Space
{
protected:
    Space *north;
    Space *east;
    Space *south;
    Space *west;
    Space *currentSpace;

public:
    Mine();
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