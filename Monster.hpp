//
//  Monster.hpp
//  Final Assignment
//
//  Created by Nicolas Rucareanu on 2022-01-24.
//

#ifndef Monster_hpp
#define Monster_hpp

#include <stdio.h>
#include <iostream>

#include "Character.hpp"
#include "Maze.hpp"

using namespace std;

class Monster : public Character
{
public:
    
    Monster();
    virtual ~Monster();
    
    void display();
    
    void placeInMaze(Maze *);
    void move(Maze *);
    
private:
    
protected:
};
#endif /* Monster_hpp */
