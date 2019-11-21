/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This is the Space class
*/

#ifndef SPACE_HPP
#define SPACE_HPP
#include "ship.hpp"
#include <iostream>

    // Virtual Space class is initiated.
class Space
{
protected:
    Space *north;
    Space *east;
    Space *south;
    Space *west;

public:
    Space();
    ~Space();
    virtual void setNorth(Space*) = 0;
    virtual Space* getNorth() = 0;
    virtual void setEast(Space*) = 0;
    virtual Space* getEast() = 0;
    virtual void setSouth(Space*) = 0;
    virtual Space* getSouth() = 0;;
    virtual void setWest(Space*) = 0;
    virtual Space* getWest() = 0;
    virtual void spaceDescription(Ship&) = 0;
    
};
#endif