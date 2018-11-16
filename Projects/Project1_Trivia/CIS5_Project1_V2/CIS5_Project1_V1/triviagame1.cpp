/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triviagame1.cpp
 * Author: Nichole Medero
 * Created on October 29, 2018, 12:59 PM
 * Purpose: CIS5 Project 1 Trivia Game // Version 1
 */

/*
 *PSEUDOCODE:
 * 1. Declare Variables
 * 2. Get Player name
 * 3. Switch Statements to navigate throughout the game 
 *      (e.g., main menu, 
 */

#include <iostream>
#include <string>

using namespace std;

//User libraries here

//Function Prototypes Here
void inputFunction();

void gameMenu();

//Program Execution Begins Here

int main(int argc, char** argv) {

    //Declare all Variables Here

    //Exit
    return 0;
}

void inputFunction() {
    
    string &playerName; //call-by-reference to be used in other functions
    
    cout<<"Hello! Welcome to the C++ Trivia Game!"<<endl;
    cout<<"What is your name, human?"<<endl;
    cin>>playerName;
    cout<<playerName<<"? Welcome!"<<endl;
        
    gameMenu();
    
}

void gameMenu() {
    
    int menuChoice;
    
    cout<<"Please select a number to navigate through the game's menu."<<endl;
    cin>>menuChoice;
    
    switch (menuChoice) {
        
        case 1: //tutorial
            gameTutorial();break;
        case 2: //about the programmer
            aboutProg();break;
        case 3: //initialize game
            triviaGame();break;
        
    }
    
}

void gameTutorial() {
    
}

void aboutProg() {
    
    
}

void triviaGame() {
    
}
