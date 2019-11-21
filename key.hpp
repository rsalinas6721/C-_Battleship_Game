/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This is the Key class
*/

#ifndef KEY_HPP
#define KEY_HPP
#include "space.hpp"
#include "ship.hpp"

        // Key class is initiated.
class Key : public Space
{
protected:
    Space *north;
    Space *east;
    Space *south;
    Space *west;
    Space *currentSpace;

public:
    Key();
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