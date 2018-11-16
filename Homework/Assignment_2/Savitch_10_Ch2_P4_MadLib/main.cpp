/*
 * Write a program that plays the game of Mad Lib. Your program should prompt
 * the user to enter the following strings:
 * The first or last name of your instructor
 * Your name
 * A food
 * A number between 100 and 120
 * An adjective
 * A color
 * An animal
 */



#include <iostream>

using namespace std;


int main( ) {

    string instructorName, yourName, food, adj, color, animal;
    int num;
    
    cout << "Press return after entering your answer.\n";
    cout << "Enter your Instructor's first or last name:\n";
    cin >> instructorName;
    cout << "Enter your first name:\n";
    cin >> yourName;
    cout << "Enter your favorite food:\n";
    cin >> food;
    cout << "Enter a number between 100 and 120:\n";
    cin >> num;
    cout << "Enter an adjective:\n";
    cin >> adj;
    cout << "Enter your favorite color:\n";
    cin >> color;
    cout << "Enter your favorite zoo animal:\n";
    cin >> animal;
    
    cout << "Dear ";
    cout << instructorName;
    cout <<",\n";
    cout << "I am so sorry that I am unable to turn in my homework at this time."
            " First, I ate a rotten ";
    cout << food;
    cout << ", which made me turn ";
    cout << color;
    cout << " and extremely ill.";
    cout << " I came down with a fever of ";
    cout << num;
    cout << " degrees. Next, my ";
    cout << adj;
    cout << " pet ";
    cout << animal;
    cout << " must have smelled the remains of the ";
    cout << food;
    cout << " on my homework because he ate it. I am currently rewriting my"
            " homework and hope you will accept it late/n/n";
    cout << "Sincerely,/n";
    cout << yourName;
    return 0;
}

