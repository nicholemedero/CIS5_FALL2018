/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nichole Medero
 * Created on October 4, 2018, 11:58 AM
 * Purpose: Write a program that asks the user to enter a number within the
 * range of 1 to 10. Use a switch statement to display the Roman numeral version
 * of that number. Do not accept a number less than 11 or greater than 10.
 * 
 */

/*
 *PSEUDOCODE:
 */

#include <iostream>

using namespace std;

//User libraries here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {

    //Declare all Variables Here
    char num; //user's number selection
    
    //Input instructions here <<
    cout<<"This program converts numbers into Roman numerals."<<endl;
    cout<<"Select an single integer within the range of 1 to 10:";
    cin>>num;
    
    //Process/Calculation here l.
    switch(num) {
        case'1':
            cout<<"You have selected 1, its Roman numeral equivalent is I."<<endl;
            break;
            
        case'2':
            cout<<"You have selected 2, its Roman numeral equivalent is II."<<endl;
            break;
            
        case'3':
            cout<<"You have selected 3, its Roman numeral equivalent is III."<<endl;
            break;
            
        case'4':
            cout<<"You have selected 4, its Roman numeral equivalent is IV."<<endl;
            break;
            
        case'5':
            cout<<"You have selected 5, its Roman numeral equivalent is V."<<endl;
            break;
            
        case'6':
            cout<<"You have selected 6, its Roman numeral equivalent is VI."<<endl;
            break;
            
        case'7':
            cout<<"You have selected 7, its Roman numeral equivalent is VII."<<endl;
            break;
            
        case'8':
            cout<<"You have selected 8, its Roman numeral equivalent is VIII."<<endl;
            break;
            
        case'9':
            cout<<"You have selected 9, its Roman numeral equivalent is IX."<<endl;
            break;
            
        case'10':
            cout<<"You have selected 10, its Roman numeral equivalent is X."<<endl;
            break;
            
        default:
            cout<<"Having trouble following instructions?"<<endl;
            break;
    }
    //Exit
    return 0;
}

