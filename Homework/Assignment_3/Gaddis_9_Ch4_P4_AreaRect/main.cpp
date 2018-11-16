/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nichole Medero
 * Created on October 4, 2018, 12:21 PM
 * Purpose: The area of a rectangle is the rectangle's length times
 * its width. Write a program that asks for the length and width of two
 * rectangles The program should tell the user which rectangle has the
 * greater area, or if the areas are the same.
 */

/*
 *PSEUDOCODE:
 */

#include <iostream>

using namespace std;

//User libraries here l. >>

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {

    //Declare all Variables Here
    int length1, length2, width1, width2, area1, area2;
    
    //Input Instructions here
    cout<<"This program calculates the area of 2 rectangles and displays"
        <<"which rectangle is larger."<<endl;
    cout<<"Enter the length of the first rectangle: ";
    cin>>length1;
    cout<<"Enter the width of the first rectangle: ";
    cin>>width1;
    cout<<"Enter the length of the second rectangle: ";
    cin>>length2;
    cout<<"Enter the width of the second rectangle: ";
    cin>>width2;
    
    //Reading back user input
    cout<<"You have entered the first rectangle's length as " <<length1<<
            " and width as " <<width1<< "." <<endl;
    cout<<"You have entered the second rectangle's length as " <<length2<<
            " and width as " <<width2<< "." <<endl;
    
    //Process/Calculations here
    area1 = length1 * width1;
    area2 = length2 * width2;
            
    //Output
    cout<<"The first rectangle's area is: " <<area1<<endl;
    cout<<"The second rectangle's area is: " <<area2<<endl;
    
    if (area1 > area2) { //IF REC1 IS BIGGER
        cout<<area1 << " is larger than " << area2 << "." << endl;
        cout<<"Rectangle 1 is bigger than rectangle 2."<<endl;
    }
    if (area1 < area2) { //IF REC2 IS BIGGER
        cout<<area2 << " is larger than " << area1 << "." << endl;
        cout<<"Rectangle 2 is bigger than rectangle 1."<<endl;
    }
    if (area1 == area2) { //IF BOTH REC AREAS ARE ==
        cout<<"Both rectangle's areas are the same size." << endl;
    }
    
    //Exit
    return 0;
}

