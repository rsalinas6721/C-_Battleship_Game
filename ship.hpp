/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This is the Ship class
*/

#ifndef SHIP_HPP
#define SHIP_HPP

    // Ship class is initiated.
class Ship
{
private:
    int health;
    int container[2];

public:
    Ship();
    int getHealth();
    void setHealth(int);
    void setContainer();
    int getContainer();
    

};
#endif