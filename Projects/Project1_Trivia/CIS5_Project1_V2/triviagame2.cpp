/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triviagame2.cpp
 * Author: Nichole Medero
 * Created on October 29, 2018, 12:59 PM
 * Purpose: CIS5 Project 1 Trivia Game // Version 1
 */

/*
 *PSEUDOCODE:
 * 1. Declare Variables
 * 2. Get Player name
 * 3. Switch Statements to navigate throughout the game 
 *      (e.g., main menu, tutorial, about programmer, etc(?))
 * 4. Function for output in each case of switch statement
 * 5. Tivia Game Function, display only one question while it is unanswered
 * 6. Separate function for each question (????????????)
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

    inputFunction();
    gameMenu();

    //Exit
    return 0;
}

void inputFunction() {
    
    string &playerName; //call-by-reference to be used in other functions
    
    cout<<"Hello! Welcome to the C++ Trivia Game!"<<endl;
    cout<<"What is your name, human?"<<endl;
    cin>>playerName;
    cout<<playerName<<"? Welcome!"<<endl;
    
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
    
    cout<<"Each question, answered correctly, is worth 100 points."<<endl;
    cout<<"Each question, answered incorrectly, is a 50 point deduction."<<endl;
    cout<<"All questions are multiple choice. Be sure to input a single character."<<endl;
    cout<<"Try to get at least 15 questions correct to release a bonus round of questions!"<<endl;
    
    gameMenu(); //return to game menu
    
}

void aboutProg() {
    
    cout<<"This project is for CIS-5 of Fall 2018."<<endl;
    cout<<"Written by Nichole Medero."<<endl;
    cout<<"**********************************************"<<endl;
    
    gameMenu(); //return to game menu
        
    }

void triviaGame(string &playerName) {
    
    int correctQ; //will display the total number of correct questions answered
    int incorrectQ; //will display the total number of incorrect questions answered
    
    cout<<"Let's get started, " <<playerName<<"! Good luck!"<<endl;
    
    //Question 1
    
    if ()
    //Question 2
    //Question 3
    //Question 4
    //Question 5
    //Question 6
    //Question 7
    //Question 8
    //Question 9
    //Question 10
    //Question 11
    //Question 12
    //Question 13
    //Question 14
    //Question 15
    //Question 16
    //Question 17
    //Question 18
    //Question 19
    //Question 20
    
    if (correctQ >= 15) { //if 
    
}
