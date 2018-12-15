/*
 * We would like to write a check. The computer needs to translate the numerical
 * result to English. Input an integer in the range [1-3000] and output the
 * English equivalent.
 * 
 * Prompt the user with:
 *      cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
 * 
 * Input 2999
 * Output
 * Two Thousand Nine Hundred Ninety Nine and no/100's Dollars
 */

/* 
 * File:   checkconversion.cpp
 * Author: Nichole Medero
 * Created on October 27, 2018, 4:33 PM
 * Purpose: Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>

using namespace std;

//Function Prototypes Here

void output(int input);
//calls other functions and outputs conversion

void thouDigit(int input);
//returns english word equivalent for the thousands place

void hunDigit(int input);
//returns english word equivalent for the hundreds place

void teensDigit(int input);
//executed if the last two digits are between 13-19

void tensDigit(int input);
//returns the english word equivalent for the tens place

void onesDigit(int input);
//returns the english word equivalent for the ones place

//Program Execution Begins Here

int main(int argc, char** argv) {

    //Declare all Variables Here
    int input;

    //Input or initialize values Here
    cout << "Input an integer [1-3000] convert to an English Check value." << endl;
    cin>>input;

    //Calculate the 1000's, 100's, 10's and 1's
    if (input > 3000) { //3000 input maximum

        cout << "That is not a valid input." << endl;

    } else {

        output(input);
        cout << "and no/100's Dollars" << endl;

    }

    //Exit
    return 0;
}

void output(int input) {

    thouDigit(input);
    hunDigit(input);
    teensDigit(input);
    tensDigit(input);
    onesDigit(input);

}

void thouDigit(int input) { //no larger than 3000

    int a = input / 1000; //a holds the thousands place

    if (a == 1) {
        cout << "One Thousand ";
    } else if (a == 2) {
        cout << "Two Thousand ";
    } else if (a == 3) {
        cout << "Three Thousand";
    }
}

void hunDigit(int input) {

    int b = (input/100)%10; //b holds the hundreds place

    if (b == 9) {
        cout << "Nine Hundred ";
    } else if (b == 8) {
        cout << "Eight Hundred ";
    } else if (b == 7) {
        cout << "Seven Hundred ";
    } else if (b == 6) {
        cout << "Six Hundred ";
    } else if (b == 5) {
        cout << "Five Hundred ";
    } else if (b == 4) {
        cout << "Four Hundred ";
    } else if (b == 3) {
        cout << "Three Hundred ";
    } else if (b == 2) {
        cout << "Two Hundred ";
    } else if (b == 1) {
        cout << "One Hundred ";
    }
}

void tensDigit(int input) {

    int c = (input % 100) / 10; //c holds the tens place

    if (c == 9) {
        cout << "Ninety";
    } else if (c == 8) {
        cout << "Eighty";
    } else if (c == 7) {
        cout << "Seventy";
    } else if (c == 6) {
        cout << "Sixty";
    } else if (c == 5) {
        cout << "Fifty";
    } else if (c == 4) {
        cout << "Forty";
    } else if (c == 3) {
        cout << "Thirty";
    } else if (c == 2) {
        cout << "Twenty";
    }
    cout << " ";
}

void teensDigit(int input) {
    int d = input % 100; //d holds teen digits

    if (d == 19) {
        cout << "Nineteen ";
    } else if (d == 18) {
        cout << "Eighteen ";
    } else if (d == 17) {
        cout << "Seventeen ";
    } else if (d == 16) {
        cout << "Sixteen ";
    } else if (d == 15) {
        cout << "Fifteen ";
    } else if (d == 14) {
        cout << "Fourteen ";
    } else if (d == 13) {
        cout << "Thirteen ";
    } else if (d == 12) {
        cout << "Twelve ";
    } else if (d == 11) {
        cout << "Eleven ";
    } else if (d == 10) {
        cout << "Ten ";
    }
}

void onesDigit(int input) {

    int e = input % 10; //e holds the ones place

    if (e == 9) {
        cout << "Nine ";
    } else if (e == 8) {
        cout << "Eight ";
    } else if (e == 7) {
        cout << "Seven ";
    } else if (e == 6) {
        cout << "Six ";
    } else if (e == 5) {
        cout << "Five ";
    } else if (e == 4) {
        cout << "Four ";
    } else if (e == 3) {
        cout << "Three ";
    } else if (e == 2) {
        cout << "Two ";
    } else if (e == 1) {
        cout << "One ";
    }
}