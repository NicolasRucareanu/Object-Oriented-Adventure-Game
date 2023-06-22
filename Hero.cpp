//
//  Hero.cpp
//  Final Assignment
//
//  Created by Nicolas Rucareanu on 2022-01-24.
//

#include <iostream>

#include "Hero.hpp"
#include "Maze.hpp"

using namespace std;

Hero::Hero()
{
    health = 100;
    symbol = "🧙‍♂️";
    
    positionY = 0;
    positionX = 0;
    
    return;
}

Hero::~Hero()
{
    return;
}

void Hero::placeInMaze(Maze * _maze)
{
    _maze -> maze[16][11] = symbol;
    
    positionX = 11;
    positionY = 16;
    
    return;
}

void Hero::move(Maze * _maze)
{
    string input = "";
    
    cin >> input;
    
    if(input == "w")
    {
        if(_maze -> maze[positionY --][positionX] != _maze -> wall)
        {
            _maze -> maze[positionY][positionX] = _maze -> SPCE;
            
            positionY = positionY --;
            
            _maze -> maze[positionY][positionX] = symbol;
        }
    }
    
    if(input == "a")
    {
        if(_maze -> maze[positionY][positionX --] != _maze -> wall)
        {
            _maze -> maze[positionY][positionX] = "⬛️";
            
            positionX = positionX --;
            
            _maze -> maze[positionY][positionX] = symbol;
        }
    }
    
    if(input == "s")
    {
        if(_maze -> maze[positionY ++][positionX] != _maze -> wall)
        {
            _maze -> maze[positionY][positionX] = "⬛️";
            
            positionY = positionY ++;
            
            _maze ->maze[positionY][positionX] = symbol;
        }
    }
    
    if(input == "d")
    {
        if(_maze -> maze[positionY][positionX ++] != _maze -> wall)
        {
            _maze -> maze[positionY][positionX] = "⬛️";
            
            positionX = positionX ++;
            
            _maze -> maze[positionY][positionX] = symbol;
        }
    }
    
    return;
}

void Hero::autoSolve(Maze * _maze)
{
    return;
}

void Hero::display()
{
    return;
}

