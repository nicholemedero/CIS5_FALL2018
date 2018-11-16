/*
 * Write a program to score the paper-rock-scissors game. Each two users types
 * in either P, R, or S. The program then announces the winner as well as the
 * basis for determining the winner: 
 * Paper covers rock,
 * Rock breaks scissors,
 * Scissors cuts paper,
 * or Nobody wins.
 * Be sure to allow the users to use lowercase as well as uppercase letters. 
 * Your program should include a loop that lets the user play again until the
 * user says they are done. :))))))) switch :)))))
 */

/* 
 * File:   main.cpp
 * Author: Nichole Medero
 * Course: CIS-5 Programming Logic with C++
 * Created on September 22, 2018, 8:32 PM
 */

/*
 * PSEUDOCODE:
 * 
 */
 
#include <iostream>
using namespace std;

int main( ) 
{
    char choice;
    char firstChoice, secondChoice;
    
    do { 
    
        cout << "This is a game of Paper-Rock-Scissors for two players." << endl;
        cout << "Enter an P for paper, R for rock, and S for scissors:" << endl;
        cin >> firstChoice;
        cout << "The next player may now enter their choice." << endl;
        cin >> secondChoice;

        if ((firstChoice == 'P' || firstChoice == 'p') && (secondChoice == 'P' || secondChoice == 'p')) {
            cout << "Both players chose paper. No one wins!" << endl;
        }
        
        if ((firstChoice == 'P' || firstChoice == 'p') && (secondChoice == 'R' || secondChoice == 'r')) {
            cout << "Paper covers rock! Player 1 wins.\n";
        }
        
        if ((firstChoice == 'P' || firstChoice == 'p') && (secondChoice == 'S' || secondChoice == 's')) {
            cout << "Scissors cuts paper! Player 2 wins.\n";
        }
        
        if ((firstChoice == 'R' || firstChoice == 'r') && (secondChoice == 'R' || secondChoice == 'r')) {
            cout << "Both players chose rock. No one wins!\n";
        }
       
        if ((firstChoice == 'R' || firstChoice == 'r') && (secondChoice == 'P' || secondChoice == 'p')) {
            cout << "Paper covers rock! Player 2 wins.\n";
        }
        
        if ((firstChoice == 'R' || firstChoice == 'r') && (secondChoice == 'S' || secondChoice == 's')) {
            cout << "Rock breaks scissors! Player 1 wins.\n";
        }
        
        if ((firstChoice == 'S' || firstChoice == 's') && (secondChoice == 'S' || secondChoice == 's')) {
            cout << "Both players chose scissors. No one wins!\n";
        }
        
        if ((firstChoice == 'S' || firstChoice == 's') && (secondChoice == 'R' || secondChoice == 'r')) {
            cout << "Rock breaks scissors! Player 2 wins.\n";
        }
        
        if ((firstChoice == 'S' || firstChoice == 's') && (secondChoice == 'P' || secondChoice == 'p')) {
            cout << "Scissors cut paper! Player 1 wins.\n";
        }
        
        
        cout << "Would you like to repeat the program (Y/N)?\n";
        cin >> choice;
        
    } while (choice == 'Y' || choice == 'y');
          
}

