/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This is the Regular class
*/

#ifndef REGULAR_HPP
#define REGULAR_HPP
#include "space.hpp"
#include "ship.hpp"

        // Regular class is initiated.
class Regular : public Space
{
protected:
    Space *north;
    Space *east;
    Space *south;
    Space *west;
    Space *currentSpace;

public:
    Regular();
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