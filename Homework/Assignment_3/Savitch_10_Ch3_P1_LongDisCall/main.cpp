/*
 * Write a program that computers the cost of a long-distance call. The cost of
 * the call is determined according to the following rate schedule:
 *      a. Any call started between 8:00am and 6:00pm, Monday through Friday,
 *          is billed at a rate of $0.40 per minute.
 *      b. Any call starting before 8:00am or after 6:00pm, Monday through
 *          Friday, is charged at a rate of $0.25 per minute.
 *      c. Any call started on a Saturday or Sunday is charged at a rate of $0.15
 *          per minute.
 * The input will consists of the day of the week, the time the call started,
 * and length of the call in minutes. The output will be the cost of the call. 
 * The time is to be put into 24-hour notation, so the time 1:30pm is input as
 * 13:30
 * The day of the week will be read as one of the following pairs of character 
 * values, which are stored in two variables of the type char.
 * Mo Tu We Th Fr Sa Su
 * Be sure to allow the user to use either uppercase or lowercase letters or a
 * combination of the two. The number of minutes will be input as a value of
 * type int. Your program should include a loop that lets the user repeat this
 * calculation until the user says they are done.
 */

/* 
 * File:   main.cpp
 * Author: Nichole Medero   
 * Course: CIS-5 Program Logic with C++
 * Created on October 1, 2018, 5:32 PM
 */

#include <iostream>

using namespace std;


int main() {
    
    const char *day[] = {"Mo" "Tu", "We", "Th", "Fr", "Sa", "Su"};
    float time, totalCost; 
    float rateA = 0.40;
    float rateB = 0.25;
    float rateC = 0.15;
    int min;
    char choice;
    
    do
    {
        cout << "This program calculates the cost of long distance calls.\n";
        cout << "Press return after inputting all the data.\n";
        cout << "Enter the first two letters of the day the call was made:\n";
        cin >> day;
        cout << "Enter the time in 24 hour notation (1:00PM = 1300):\n";
        cin >> time;
        cout << "Enter the length of the call rounded to the neared minute:\n";
        cin >> min;
        
        if ((day == "Mo" && time >= 800) || (day == "Mo" && time <= 1800)) { 
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "MO" && time >= 800) || (day == "MO" && time <= 1800)) { 
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "mo" && time >= 800) || (day == "mo" && time <= 1800)) { 
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "Tu" && time >= 800) || (day == "Tu" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
         if ((day == "TU" && time >= 800) || (day == "TU" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
         if ((day == "tu" && time >= 800) || (day == "tu" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
         }
        
        if ((day == "We" && time >= 800) || (day == "We" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "WE" && time >= 800) || (day == "WE" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "we" && time >= 800) || (day == "we" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "Th" && time >= 800) || (day == "Th" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "TH" && time >= 800) || (day == "TH" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "th" && time >= 800) || (day == "th" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "Fr" && time >= 800) || (day == "Fr" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "FR" && time >= 800) || (day == "FR" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "fr" && time >= 800) || (day == "fr" && time <= 1800)) {
            totalCost = min * rateA;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "Mo" && time < 800) || (day == "Mo" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "MO" && time < 800) || (day == "MO" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "mo" && time < 800) || (day == "mo" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "Tu" && time < 800) || (day == "Tu" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "TU" && time < 800) || (day == "TU" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "tu" && time < 800) || (day == "tu" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "We" && time < 800) || (day == "We" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "WE" && time < 800) || (day == "WE" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "we" && time < 800) || (day == "we" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "Th" && time < 800) || (day == "Th" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
         if ((day == "TH" && time < 800) || (day == "TH" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
         if ((day == "th" && time < 800) || (day == "th" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "Fr" && time < 800) || (day == "Fr" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "FR" && time < 800) || (day == "FR" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if ((day == "fr" && time < 800) || (day == "fr" && time > 1800)) {
            totalCost = min * rateB;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if (day == "SA" || day == "SU" ) {
            totalCost = min * rateC;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if (day == "sa" || day == "su" ) {
            totalCost = min * rateC;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        if (day == "Sa" || day == "Su" ) {
            totalCost = min * rateC;
            cout << "The total cost of your bill is $ " << totalCost << endl;
        }
        
        cout << "Day: " << day << endl;
        cout << "Time: " << time << endl;
        cout << "Call length: " << min << endl;
        cout << "Would you like to repeat the program (Y/N)?\n";
        cin >> choice;
        
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

