//
//  Maze.hpp
//  Final Assignment
//
//  Created by Nicolas Rucareanu on 2022-01-20.
//

#ifndef Maze_hpp
#define Maze_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Maze
{
public:
    
    Maze();
    virtual ~Maze();
    
    void display();
    
    string maze[18][24];
    
    string wall;
    string SPCE;
    string ENTR;
    string CODE;
    
private:
    
    

protected:
};


#endif /* Maze_hpp */
