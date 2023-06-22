//
//  Maze.cpp
//  Final Assignment
//
//  Created by Nicolas Rucareanu on 2022-01-20.
//

#include "Maze.hpp"
#include <iostream>

using namespace std;

Maze::Maze()
{
    wall = "⬜️";
    SPCE = "⬛️";
    ENTR = "🚪";
    CODE = "🔑";
    
    string maze1[18][24] = {
        {wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall},
        {wall, SPCE, SPCE, SPCE, wall, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, wall, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, wall},
        {wall, SPCE, wall, wall, wall, wall, wall, SPCE, SPCE, SPCE, wall, SPCE, wall, wall, wall, SPCE, SPCE, wall, wall, wall, wall, wall, SPCE, wall},
        {wall, SPCE, wall, SPCE, SPCE, SPCE, wall, SPCE, wall, wall, wall, SPCE, SPCE, SPCE, wall, wall, SPCE, wall, SPCE, SPCE, SPCE, wall, SPCE, wall},
        {wall, SPCE, wall, SPCE, wall, SPCE, wall, SPCE, SPCE, SPCE, wall, SPCE, wall, SPCE, SPCE, SPCE, SPCE, wall, SPCE, wall, SPCE, wall, CODE, wall},
        {wall, SPCE, wall, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, wall, wall, wall, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, wall, wall, wall},
        {wall, SPCE, wall, wall, wall, wall, wall, SPCE, wall, SPCE, SPCE, wall, SPCE, SPCE, SPCE, wall, SPCE, wall, wall, wall, wall, wall, SPCE, wall},
        {wall, SPCE, SPCE, SPCE, wall, SPCE, SPCE, SPCE, wall, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, wall, SPCE, SPCE, SPCE, SPCE, wall, SPCE, SPCE, wall},
        {wall, SPCE, wall, SPCE, wall, wall, wall, wall, wall, SPCE, SPCE, SPCE, wall, wall, wall, wall, SPCE, SPCE, wall, wall, wall, SPCE, SPCE, wall},
        {wall, SPCE, wall, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, wall, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, wall, wall},
        {wall, SPCE, SPCE, SPCE, wall, SPCE, SPCE, SPCE, SPCE, wall, wall, wall, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, wall, SPCE, SPCE, SPCE, wall},
        {wall, SPCE, wall, wall, wall, wall, wall, SPCE, SPCE, wall, SPCE, wall, SPCE, SPCE, SPCE, SPCE, SPCE, wall, wall, wall, wall, wall, SPCE, wall},
        {wall, SPCE, wall, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, wall, SPCE, SPCE, SPCE, SPCE, SPCE, wall, SPCE, SPCE, SPCE, SPCE, SPCE, wall, SPCE, wall},
        {wall, wall, wall, SPCE, wall, SPCE, wall, SPCE, SPCE, SPCE, SPCE, wall, wall, wall, SPCE, wall, SPCE, wall, SPCE, wall, SPCE, wall, SPCE, wall},
        {wall, SPCE, wall, SPCE, SPCE, SPCE, wall, SPCE, wall, SPCE, SPCE, SPCE, SPCE, wall, SPCE, wall, SPCE, wall, SPCE, SPCE, SPCE, wall, SPCE, wall},
        {wall, SPCE, wall, wall, wall, wall, wall, SPCE, SPCE, SPCE, wall, SPCE, SPCE, SPCE, SPCE, wall, SPCE, wall, wall, wall, wall, wall, SPCE, wall},
        {wall, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, wall, wall, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, SPCE, wall, SPCE, wall},
        {wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, ENTR, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall, wall}
    };
    
    for(int i = 0; i < 18; i ++)
    {
        for(int x = 0; x < 24; x ++)
        {
            maze[i][x] = maze1[i][x];
        }
    }
}

Maze::~Maze()
{
    
}

void Maze::display()
{
    for(int i = 0; i < 18; i ++)
    {
        for(int x = 0; x < 24; x ++)
        {
            cout << maze[i][x];
        }
        cout << endl;
    }
}
