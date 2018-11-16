/*
 *  Write a program that finds the temperature that is the same in both Celsius
 * and Fahrenheit. The formula to convert from Celsius to Fahrenheit is:
 * Fahrenheit = ((9 * Celsius)/5) + 32
 *  Your program should create two integer variables for the temperature in
 * Celsius and Fahrenheit. Initialize the temperature to 100 degrees Celsius. In
 * a loop, decrement the Celsius value and compute the corresponding temperature
 * in Fahrenheit until the two values are the same.
 */

/* 
 * File:   main.cpp
 * Author: Nichole Medero
 * Course: CIS-5 Program Logic with C++
 * Created on October 1, 2018, 5:11 PM
 */

/*
 * PSEUDOCODE:
 * 1. Initialize variables using int
 * 2. Use a for loop.
 * 3. Initialize the cel to 100 and decrement. 
 * 4. Repeat the loop until both fahr and cel are the same as whole integers.
 */

#include <iostream>
using namespace std;

int main() {
    
    int cel = 100;
    int fahr = 0;
    
    while (true) {
        fahr = (1.8 * cel) + 32; //(9/5 = 1.8)
        if (cel == fahr) {
            break;
        }
        cel--;
    }
    
    cout << cel << "C and " << fahr << "F are the same in both Celsius and Fahrenheit." << endl;      
    return 0;
}

