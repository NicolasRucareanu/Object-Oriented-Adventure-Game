//
//  main.cpp
//  Final Assignment
//
//  Created by Nicolas Rucareanu on 2022-01-20.
//
//=================================Header==========================
/*Author: Nicolas Rucareanu
 Project: Final Project
 Description: Create a game that requires the user to navigate a maze and interact with objects and other beings inside the maze.
Last Modified: 01.24.2022 */
//=============================Pre-Processor-Cmnds=================
#include <iostream>
// #include <windows.h>

#include "Maze.hpp"
#include "Hero.hpp"

using namespace std;
//============================Structures=============================
//  N/A
//======================================Prototype===================

int menuFunction(string, int, string, int);
void playMaze();
void solveMaze();

//=====================================Definition====================

int menuFunction(string _prompt, int _userChoice, string _options[], int numOfOptions)
{
    do
    {
        cout << _prompt << endl;
        for (int i = 0; i < numOfOptions; i++)
        {
            cout << i+1 << ") " << _options[i] << endl;
        }
        cin >> _userChoice;
        
        if(_userChoice > numOfOptions or _userChoice < 1)
        {
            cout << "That was not a valid input please try again." << endl;
//          system ("Pause");
//          system ("CLS");
        }
    }while(_userChoice > numOfOptions or _userChoice < 1);
    
    return _userChoice;
}

void playMaze()
{
    Maze * myMaze = new Maze();
    Hero * hero = new Hero();
    
    myMaze -> display();
    
    hero -> placeInMaze(myMaze);
    
    myMaze -> display();
    
    hero -> move(myMaze);
    
    myMaze -> display();
    
    cout << myMaze -> wall;
    
    return;
}

void solveMaze()
{
    return;
}

//====================================Main============================

int main()
{
    int userChoice = 0;
    string prompt1 = "Which gamemode would you like to play?";
    string options1[3] = {"Solve the maze yourself.", "Let AI solve the maze.", "Quit"};
    
    
    
    userChoice = menuFunction(prompt1, userChoice, options1, 3);
    
    if (userChoice != 3)
    {
        do
        {
            if(userChoice == 1)
            {
                playMaze();
            }
            
            else if(userChoice == 2)
            {
                solveMaze();
            }
            
            userChoice = menuFunction(prompt1, userChoice, options1, 3);
        }while(userChoice != 3);
    }
    
    return 0;
}
