/*
Author: Ricky Salinas
Due Date: 18 August 2018
Description: This is an adventure game to find a hidden treasure chest.
*/

#include "ship.hpp"
#include "space.hpp"
#include "mine.hpp"
#include "regular.hpp"
#include "key.hpp"
#include "treasure.hpp"
#include <string>
#include <iostream>

int main()
{
        // Variables are declared. 
    char direction;    
    bool running = true;
    char input;
    int x = 0;
    int y = 0;
    int z = 0;
 
        // Memory allocated. Spaces are created. 
    Ship *santaMaria = new Ship;
    Space *playerSpace = new Regular; 
    Space *startSpace = new Regular;
    Space *spaceOne = new Mine; 
    Space *spaceTwo = new Mine;
    Space *spaceThree = new Mine;
    Space *spaceFour = new Mine;
    Space *spaceFive = new Key;
    Space *spaceSix = new Regular;
    Space *spaceSeven = new Key;
    Space *spaceEight = new Key;    
    Space *spaceNine = new Mine;
    Space *spaceTen = new Treasure;

        // North room set
    startSpace->setNorth(spaceOne); 
    spaceOne->setSouth(startSpace);

        // East room set
    startSpace->setEast(spaceTwo);
    spaceTwo->setWest(startSpace);


        // South room set
    startSpace->setSouth(spaceThree);
    spaceThree->setNorth(startSpace);

        // West room set
    startSpace->setWest(spaceFour);
    spaceFour->setEast(startSpace);

        // North-North room set
    spaceOne->setNorth(spaceFive);
    spaceFive->setSouth(spaceOne);

        // East-East room set
    spaceTwo->setEast(spaceSix);
    spaceSix->setWest(spaceTwo);

        // South-South room set
    spaceThree->setSouth(spaceSeven);
    spaceSeven->setNorth(spaceThree);

        // West-West room set
    spaceFour->setWest(spaceEight);
    spaceEight->setEast(spaceFour);

        // East-East-East room set
    spaceSix->setEast(spaceNine);
    spaceNine->setWest(spaceSix);

        // East-East-East-North room set
    spaceNine->setNorth(spaceTen);
    spaceTen->setSouth(spaceNine);

        // Player location set.
    playerSpace = startSpace;

    // Map is created. 
    char **map = new char*[5];
    for (int i=0; i<6; i++)
    {
        map[i] = new char[4];
    }

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<6; j++)
        {
            map[i][j] = ' ';
        }
    }  

    map[0][2] = 'O';
    map[1][2] = 'O';
    map[2][0] = 'O';
    map[2][1] = 'O';
    map[2][2] = '#';
    map[2][3] = 'O';
    map[2][4] = 'O';
    map[3][2] = 'O';
    map[4][2] = 'O';
    map[5][2] = 'O';
    map[2][5] = 'O';
    map[1][5] = 'X';

        // Menu is prompted.
        // Game objective is declared.
    std::cout << "You are Captain White Beard, the Captain of the ship The Santa Maria!" << std::endl;
    std::cout << "You find a map to what you believe is the burried treasure of Pirate Red Beard." << std::endl;
    std::cout << "According to the map, the treasure chest needs three keys scattered throughout the ocean to be opened." << std::endl;
    std::cout << "The end of the map reads...watch out for mines." << std::endl;
    std::cout << std::endl;
    std::cout << "Your Position: '#'" << std::endl;
    std::cout << "Open Sea: 'O'" << std::endl;
    std::cout << "Treasure: 'X'" << std::endl;

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<6; j++)
        {
            std::cout << map[i][j];
        }
        std::cout << std::endl;
    }
    
    std::cout << "The objective is to find the burried treasure of Pirate Red Beard." << std::endl;

        // While loop runs the game.
    while (running == true)
    {
        bool choice = true;
        while (choice == true)
        {
        // User is asked for a direction.

            std::cout << "Which direction would you like to go?" << std::endl;
            std::cout << "North: N/n" << std::endl;
            std::cout << "East: E/e" << std::endl;
            std::cout << "South: S/s" << std::endl;
            std::cout << "West: W/w" << std::endl;
            std::cin >> direction;

            // Ship is moved north if space is available.
            if((direction == 'N') || (direction == 'n'))
            {
                if (playerSpace->getNorth() != NULL)
                {
                    std::cout << "The Santa Maria moved north." << std::endl;
                    playerSpace = playerSpace->getNorth();
                    playerSpace->spaceDescription(*santaMaria);
                    choice = false;
                }

                else if (playerSpace->getNorth() == NULL)
                {
                    std::cout << "The wind is too rough to travel in that direction." << std::endl;
                }
            }

            // Ship is moved east if space is available.
            else if ((direction == 'E') || (direction == 'e'))
            {
                if (playerSpace->getEast() != NULL)
                {
                    std::cout << "The Santa Maria moved east." << std::endl;
                    playerSpace = playerSpace->getEast();
                    playerSpace->spaceDescription(*santaMaria);
                    choice = false;
                }

                else if (playerSpace->getEast() == NULL)
                {
                    std::cout << "The wind is too rough to travel in that direction." << std::endl;
                }
            }      

        // Ship is moved south if space is available.
        
            else if ((direction == 'S') || (direction == 's'))
            {
                if (playerSpace->getSouth() != NULL)
                {
                    std::cout << "The Santa Maria moved south." << std::endl;
                    playerSpace = playerSpace->getSouth();
                    playerSpace->spaceDescription(*santaMaria);
                    choice = false;
                }

                else if (playerSpace->getSouth() == NULL)
                {
                    std::cout << "The wind is too rough to travel in that direction." << std::endl;
                }
            }

        // Ship is moved west if space is available.
            else if ((direction == 'W') || (direction == 'w'))
            {
                if (playerSpace->getWest() != NULL)
                {
                    std::cout << "The Santa Maria moved west." << std::endl;
                    playerSpace = playerSpace->getWest();
                    playerSpace->spaceDescription(*santaMaria);
                    choice = false;
                }

                else if (playerSpace->getWest() == NULL)
                {
                    std::cout << "The wind is too rough to travel in that direction." << std::endl;
                }
            }

            else
            {
                std::cout << "Try Again" << std::endl;
                std::cin.clear();
                std::cin.ignore();
            }
        }

        // Key is found player container is called. Key is put into container array.
        if (playerSpace ==  spaceFive)
            {
                while (x==0)
                {
                    x++;
                    std::cout << "You found the northern key!" << std::endl;
                    santaMaria->setContainer();
                }
            }
    
        else if (playerSpace ==  spaceSeven)
        {
            while (y==0)
            {
                y++;
                std::cout << "You found the southern key!" << std::endl;
                santaMaria->setContainer();
            }
        }
    
        else if (playerSpace ==  spaceEight)
        {
            while (z==0)
            {
                z++;
                std::cout << "You found the western key!" << std::endl;
                santaMaria->setContainer();
            }
        }
    
        if ((playerSpace ==  spaceTen) && (santaMaria->getContainer() != 1))
        {
            std::cout << "You do not have the key to open the chest!" << std::endl;
        }
        
        else if ((playerSpace ==  spaceTen) && (santaMaria->getContainer() == 1))
        {
            std::cout << "You opened the chest and became the wealthiest pirate in the sea." << std::endl;
            running = false;
            break;
        }

        // Ship health is checked. 
        if (santaMaria->getHealth() == 0)
        {
            std::cout << "The boat sank! You lose." << std::endl;
            running = false;
            break;
        }
    
        std::cout << "Press Q/q to quit?" << std::endl;
        std::cin >> input;
    
        if((input == 'Q') || (input == 'q'))
        {
            running = false;
            std::cout << "The game will now end!" << std::endl;
        }
        
        else if ((input != 'Q') || (input != 'q'))
        {
            std::cout << "The game will continue!" << std::endl;
        }
    }

        // Memory cleared. Pointers are deleted. 
    delete santaMaria;
    delete startSpace;
    delete spaceOne;
    delete spaceTwo;
    delete spaceThree;
    delete spaceFour;
    delete spaceFive;
    delete spaceSix;
    delete spaceSeven;
    delete spaceEight;
    delete spaceNine;
    delete spaceTen;

return 0;
}
