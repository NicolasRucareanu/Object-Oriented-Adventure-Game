//
//  Hero.hpp
//  Final Assignment
//
//  Created by Nicolas Rucareanu on 2022-01-24.
//

#ifndef Hero_hpp
#define Hero_hpp

#include <stdio.h>
#include <iostream>

#include "Character.hpp"
#include "Maze.hpp"

using namespace std;

class Hero : public Character
{
public:
    
    Hero();
    virtual ~Hero();
    
    void display();
    
    void placeInMaze(Maze *);
    void move(Maze *);
    void autoSolve(Maze *);
    
private:
    
protected:
};


#endif /* Hero_hpp */
