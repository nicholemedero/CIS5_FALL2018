/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nichole Medero
 * Created on October 4, 2018, 12:50 PM
 * Purpose: The colors red, blue, and yellow are known as primary colors because
 * they cannot be made by mixing other colors. When you mix two primary colors,
 * you get a secondary color, as shown:
 *      red + blue = purple
 *      red + yellow = orange
 *      blue + yellow = green
 * Write a program that prompts the user to enter the name of two primary colors
 * to mix If the user enters anything other than "red, "blue," or "yellow", the 
 * program should display an error message. Otherwise, the program should display
 * the name of the secondary color that results by mixing two primary colors.
 */

/*
 *PSEUDOCODE:
 */

#include <iostream>
#include <cstring>

using namespace std;

//User libraries here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {

    //Declare all Variables Here l. >> ||

    string color1, color2;

    //Input Instructions
    cout << "This program adds two primary colors and outputs the proper "
            "secondary color." << endl;
    cout << "Enter 1 of the 3 primary colors ('red', 'blue' or 'yellow'): ";
    cin>>color1;
    cout << "Enter another primary color ('red', 'blue' or 'yellow'): ";
    cin>>color2;

    //Read back user input
    cout << "You have entered " << color1 << " and " << color2 << "." << endl;

    //Process/Calculation & Output
    if ((strcmp(color1.c_str(), "red") == 0 && strcmp(color2.c_str(), "blue") == 0)
            || (strcmp(color1.c_str(), "blue") == 0 && strcmp(color2.c_str(), "red") == 0)) {
        cout << "Red and blue make purple." << endl;
    }

    if ((strcmp(color1.c_str(), "red") == 0 && strcmp(color2.c_str(), "yellow") == 0)
            || (strcmp(color1.c_str(), "yellow") == 0 && strcmp(color2.c_str(), "red") == 0)) {
        cout << "Red and yellow make orange." << endl;
    }

    if ((strcmp(color1.c_str(), "blue") == 0 && strcmp(color2.c_str(), "yellow") == 0)
            || (strcmp(color1.c_str(), "yellow") == 0 && strcmp(color2.c_str(), "blue") == 0)) {
        cout << "Blue and yellow make green." << endl;
    }

    if ((strcmp(color1.c_str(), "red") != 0 || strcmp(color1.c_str(), "yellow") != 0) || strcmp(color1.c_str(), "blue") != 0) {
        cout << "One or more of your inputs is invalid. Reread the instructions." << endl;
    }

    if ((strcmp(color2.c_str(), 'red') != 0 || strcmp(color2.c_str(), "yellow") != 0) || strcmp(color2.c_str(), "blue") != 0) {
            cout << "One or more of your inputs is invalid. Reread the instructions." << endl;
        }

        //Exit
        return 0;
}

