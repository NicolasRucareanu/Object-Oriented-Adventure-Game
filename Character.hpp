//
//  Character.hpp
//  Final Assignment
//
//  Created by Nicolas Rucareanu on 2022-01-24.
//

#ifndef Character_hpp
#define Character_hpp

#include <stdio.h>
#include <iostream>

#include "Maze.hpp"

using namespace std;

class Character
{
public:
    
    Character();
    virtual ~Character();
    
    void virtual display() = 0;
    
    void virtual placeInMaze(Maze *) = 0;
    void virtual move(Maze *) = 0;
    
    int health;
    string symbol;
    
    int positionX;
    int positionY;
    
private:
    
protected:
};

#endif /* Character_hpp */
